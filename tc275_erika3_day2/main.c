#include "ee.h"
#include "ee_oo_api_osek.h"
#include "ee_api_types.h"
#include "main.h"

void StartupHook(void)
{
//	my_printf("Hello world!\n");
//	ActivateTask(Task_Motor);
//	ActivateTask(DCMotor_Example);
//	ActivateTask(ADC_Example);
//	ActivateTask(TOF_Example);
//	ActivateTask(Ultrasonic_Example);
//	ActivateTask(Ctrl_Btn);
//	ActivateTask(Ctrl_HLamp);
//	ActivateTask(Ctrl_InAir);
//	ActivateTask(Ctrl_Window);
//	ActivateTask(OS_EE_Task_Init);
	ActivateTask(CAN_Tx);
}

/* Task Declaration */
DeclareTask(CAN_Tx);
DeclareTask(UART_Echo);
DeclareTask(DCMotor_Example);
DeclareTask(Timer_Example);
DeclareTask(Ultrasonic_Example);
//DeclareTask(Buzzer_Example);
DeclareTask(TOF_Example);
DeclareTask(ADC_Example);
DeclareTask(OS_EE_Task_Init);
DeclareTask(Task_Motor);
DeclareTask(Task_AEB);
DeclareTask(Ctrl_Window);
DeclareTask(Ctrl_InAir);
DeclareTask(Ctrl_HLamp);
DeclareTask(Ctrl_Btn);

bodyStatus status;
int distance = 3;
//uint16 internal = 0;

TASK(Ctrl_Btn){
	volatile unsigned int adcResultX = 0;
	volatile double dist = 0;
	while(getSW3()) {
		VADC_startConversion(); // X
		adcResultX = VADC_readResult();
		dist = (int)ReadUltrasonic_noFilt();
//		my_printf("%d\n", adcResultX);
		my_printf("Distance: %lfcm\n", dist);
		if(adcResultX <= 10){
//			my_printf("DOWN\n");
			movChB_PWM(status.wDuty, 1); // window down (open)
		}
		else if(adcResultX >= 2000){
//			my_printf("UP\n");
			movChB_PWM(status.wDuty, 0); // window up (close)
		}
		else{
//			my_printf("NORMAL\n");
			status.dist = dist;
			stopChB();
		}
	}
	my_printf("SW TEst\n");
	TerminateTask();
}
TASK(Ctrl_Window){
	uint16 internal = getisInternal();
	unsigned char backupDir = status.window;	// 0: open / 1: close
	uint32 backupDist = status.dist;
	if(internal){
		backupDir = status.window;	// save current status to backup
		backupDist = status.dist;
		status.window = 1;		// close
	}
	else{
		status.window = backupDir;
		status.dist = backupDist;
	}

	uint32 data = status.hLamp << 16 || status.window << 8 || status.inAir;
	Driver_Can_TxTest(300, data);

	for(int i = 0; i<distance*10000000; i++) // How long...?
		movChB_PWM(status.wDuty, !status.window);
	stopChB();
	TerminateTask();
}

TASK(Ctrl_HLamp){
	uint16 dark = getisDark();
	/* [START] Temporary INPUT PROCESS
	uint16 dark = 0;
	unsigned char ch;
	ch = _in_uart3();
	if(ch == '1'){
		internal = 1;
	}
	else if(ch == '0'){
		internal = 0;
	}
	dark = internal;
	[END] Temporary INPUT PROCESS */
	unsigned char backup = status.hLamp;

	if(dark == 1){
		backup = status.hLamp; 		// save cur status to backup
		status.hLamp = 1;
	}else{ // 터널 벗어날 경우 이전 state로 돌아오고 temp state저장
		status.hLamp = backup;
	}
	setLED1(status.hLamp);
	TerminateTask();
}
TASK(Ctrl_InAir){
	uint16 internal = getisInternal();
//	int cur = status.inAir;		// 0: off / 1: on
	unsigned char backup = status.inAir;
//	int duty = 20;
	if(internal){
		backup = status.inAir;
		status.inAir = 1; // start
	}else{
		status.inAir = backup;
	}
	if(status.inAir){
		movChA_PWM(status.iDuty, 1);
	}else{
		stopChA();
	}
	TerminateTask();
}

TASK(Task_Motor){
	int duty=0;
	unsigned char ch;
	unsigned char dir;
	while(1){
		ch=_in_uart3();
		_out_uart3(ch);
		if(ch=='w'||ch=='W'){
			duty+=10;
			if(duty>0) dir=1;

		}
		else if(ch=='s'||ch=='S'){
			//duty-=10;
			duty=duty-10;
			//dir=1;
			if(duty<0) dir=0;
			}

		if(abs(duty)>100) {duty=100;}
		//else if(duty<0) {duty=0;}
		movChA_PWM(abs(duty),dir);
		movChB_PWM(abs(duty),dir);
	}
	TerminateTask();
}

TASK(Task_AEB){
	while(1){
		toggleLED2();
		delay_ms(1000);
	}
	TerminateTask();
}

TASK(CAN_Tx)
{
	while(1){
		Driver_Can_TxTest(0x300, 0x15);
		delay_ms(1000);
		Driver_Can_TxTest(0x300, 0x00);
		delay_ms(1000);
	}
	TerminateTask();
}

TASK(UART_Echo)
{
	unsigned char c;
	while (1) {
		c = _in_uart3();
		_out_uart3(c);
		if (c == '\r') { _out_uart3('\n'); }
	}
	TerminateTask();
}

TASK(DCMotor_Example)
{
	int duty=0;
	unsigned char ch;
	unsigned int dir = 0; 	// 0: up/counter clockwise, 1: down/ clockwise
	unsigned int stop = 0; 	// 0: start, 1: stop
	unsigned int mode = 1; 	// 1: chA, 2: chB
	while (1) {
	      ch = _in_uart3();
	      switch(ch){
	      case 'w': 	// speed-up
		      duty += 10;
	    	  break;
	      case 's': 	// speed-down
	    	  duty -= 10;
	    	  break;
	      case 'd':		// start
	    	  stop = 0;
	    	  break;
	      case 'a': 	// stop
	    	  stop = 1;
	    	  break;
	      case 'e':		// change direction(toggle)
	    	  dir = 1-dir;
	    	  break;
	      case '1':		// select chA
	    	  mode = 1;
	    	  break;
	      case '2':		// select chB
	    	  mode = 2;
	    	  break;
	      }
	      if (duty > 100) {
	         duty = 100;
	      } else if (duty < 0) {
	         duty = 0;
	      }
	      if(stop == 1){
	    	  stopCh(mode);
	      }
	      else{
	    	  movCh(mode, duty, dir);
	      }
	}
	TerminateTask();
}

TASK(Timer_Example)
{
	volatile int i, j;
	unsigned int timer_end;
	float execTime;

	setGpt12_T4(0);
	runGpt12_T4();
	for (i = 0; i < 1; i++)
		for (j = 0; j < 18200; j++)
			continue;
	stopGpt12_T4();
	timer_end = getGpt12_T4();
	execTime = (timer_end - 0) * 10.24;
	my_printf("Execution Time: %dus\n", (int) execTime);

	TerminateTask();
}

TASK(Ultrasonic_Example)
{
	volatile int dist;
	while(1) {
		dist = (int)ReadUltrasonic_noFilt();
		if (dist >= 20&&dist<=30) {
			setLED1(1);
//			ActivateTask(Buzzer_Example);
		} else if(dist>=10&&dist<20) {
			setLED1(0);
//			ActivateTask(Buzzer_Example);
		}
		else if(dist<10){
		}
		else{
			;
		}
		my_printf("Distance: %dcm\n", dist);
		delay_ms(100);
	}
	TerminateTask();
}

TASK(Buzzer_Example)
{
	volatile unsigned int j = 0;
	while (j++ < 1000) {
		MODULE_P02.OUT.B.P3 = 1;
		Beep(130);
		MODULE_P02.OUT.B.P3 = 0;
		Beep(130);
	}
	TerminateTask();
}

TASK(TOF_Example)
{
	int tof_distance;
	while (1) {
		tof_distance = getTofDistance();
		if (tof_distance == -1) {
			my_printf("Invalid checksum error!\n");
		} else if (tof_distance == 0) {
			my_printf("Out of Range!\n");
		} else {
			my_printf("Distance: %dmm\n", tof_distance);
		}
	}
	TerminateTask();
}

TASK(ADC_Example)
{
	volatile unsigned int adcResultX = 0;
	while(1) {
		VADC_startConversion(); // X
		adcResultX = VADC_readResult();
		if(adcResultX <= 10){
			my_printf("DOWN\n");
		}
		else if(adcResultX >= 2000){
			my_printf("UP\n");
		}
		else{
			my_printf("NORMAL\n");
		}
	}
	TerminateTask();
}

TASK(OS_EE_Task_Init)
{
	while(1);
	TerminateTask();
}

int main(void)
{
	SYSTEM_Init();
	InterruptInit();

	int iniFLamp = 0;	// 0: off  / 1: on
	int iniInAir = 0;	// 0: off  / 1: on
	int iniWindow = 0; 	// 0: open / 1: close
	int inAirDuty = 20;
	int windowDuty = 60;

	Driver_Can_Init(300);	// Tx FrameID: 300
	_init_uart3();
	Init_GPIO(iniFLamp);
	init_VADC();
	Init_Ultrasonics();
	Init_DCMotorPWM();
	InitChA(iniInAir, inAirDuty);
//	InitChB(iniWindow, iniDuty, distance);


	status.hLamp = iniFLamp;
	status.inAir = iniInAir;
	status.window = iniWindow;
	status.dist = (int)ReadUltrasonic_noFilt();
	status.iDuty = inAirDuty;
	status.wDuty = windowDuty;
//	init_gpt2();
//	Init_Buzzer();
//	Init_Buzzer_PWM();
//	Init_ToF();


	StartOS(OSDEFAULTAPPMODE);

	return 0;
}
