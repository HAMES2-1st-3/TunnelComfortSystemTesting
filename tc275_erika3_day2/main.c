#include "ee.h"
#include "ee_oo_api_osek.h"
#include "ee_api_types.h"
#include "main.h"

void StartupHook(void)
{
	//my_printf("Hello aaaorld!\n");
	//ActivateTask(Task_Motor);
	ActivateTask(Blink_LED);
	//ActivateTask(LCD_TEST);

}

/* Task Declaration */
DeclareTask(Blink_LED);
DeclareTask(UART_Echo);
DeclareTask(DCMotor_Example);
DeclareTask(Timer_Example);
DeclareTask(Ultrasonic_Example);
DeclareTask(Buzzer_Example);
DeclareTask(TOF_Example);
DeclareTask(ADC_Example);
DeclareTask(OS_EE_Task_Init);
DeclareTask(Task_Motor);
DeclareTask(Task_AEB);
DeclareTask(LCD_TEST);
int duty=0;
unsigned char ch;
unsigned char dir;
int flag=0;
int pwm=0;

TASK(LCD_TEST){

	while(1){
		setLED1(1);
		delay_mss(3000);
	    write_instruction(0x80); //첫번째 줄 이동
		delay_mss(10000);
	    write_data('a'); //0x61
	    delay_mss(10000);
	    write_data('b');//0x62
	    delay_mss(10000);
	    write_instruction(0xc0); //두번째 줄 이동
	    delay_mss(10000);
		write_data('c');//0x63
		delay_mss(10000);
		write_data('d');//0x64
		delay_mss(10000);
		setLED1(0);
		delay_mss(3000);
	}
	TerminateTask();
}
TASK(Task_Motor){
	//toggleLED1();

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
	toggleLED2();
	TerminateTask();
}
TASK(Blink_LED)
{
	int temp = 0;
	int pre = 0;
	int istunnel = 0;

	// tunnel signal이 들어오고 현재 상태가 lamp off인 경우 ON -> OFF 하고 tempstate저장
	if(istunnel == 1 && temp ==0){
		setLED1(1);
		pre = temp;
		temp = 1;
	}else if(istunnel ==0){ // 터널 벗어날 경우 이전 state로 돌아오고 tempstate저장
		setLED(pre);
		temp = pre;
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
	unsigned int i;
	while (1) {
		movChA(1);
		movChB(1);
		i = 0; while (i++ < 10000000);
		movChA(0);
		movChB(0);
		i = 0; while (i++ < 10000000);
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
			//setLED1(1);
			ActivateTask(Buzzer_Example);
		} else if(dist>=10&&dist<20) {
			//setLED1(0);
			ActivateTask(Buzzer_Example);
		}
		else if(dist<10){
			stopChB();
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
	volatile unsigned int adcResult = 0;
	while(1) {
		VADC_startConversion();
		adcResult = VADC_readResult();
		my_printf("%d\n", adcResult);
	}
	TerminateTask();
}

TASK(OS_EE_Task_Init)
{
	TerminateTask();
}

int main(void)
{
	SYSTEM_Init();
	//InterruptInit();
	Init_GPIO();
	//init_lcd();
	//Driver_Can_Init();

	//_init_uart3();
//	Init_DCMotor();
//	Init_DCMotorPWM();
//	init_gpt2();
//	Init_Ultrasonics();
//	Init_Buzzer();
//	Init_Buzzer_PWM();
	//Init_ToF();
//	init_VADC();
	StartOS(OSDEFAULTAPPMODE);

	return 0;
}


