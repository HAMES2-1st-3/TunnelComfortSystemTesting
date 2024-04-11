#include "GPIO.h"
#include "tc27xd/IfxPort_PinMap.h"
void Init_GPIO(int iniFLamp)
{
	/* Set P10.2(LED1) as push-pull output */
	MODULE_P10.IOCR0.B.PC2 = 0b10000;

	/* Set P10.1(LED2) as push-pull output */
	MODULE_P10.IOCR0.B.PC1 = 0b10000;

	/* Set P2.0(SW1) as input pull-up */
	MODULE_P02.IOCR0.B.PC0 = 0b00010;

	/* Set P2.1(SW2) as input pull-up */
	MODULE_P02.IOCR0.B.PC1 = 0b00010;

	/*P20_6    Digital Output*/
	IfxPort_setPinModeOutput(IfxPort_P20_6.port, IfxPort_P20_6.pinIndex, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
	IfxPort_setPinLow(IfxPort_P20_6.port, IfxPort_P20_6.pinIndex);

	//LED1_GPIO_OUTPUT
	MODULE_P02.IOCR0.B.PC3 = 0x10;
	MODULE_P02.IOCR4.B.PC4 = 0x10;
	MODULE_P02.IOCR4.B.PC5 = 0x10;
	//LED2_GPIO_OUTPUT
	MODULE_P00.IOCR8.B.PC8 = 0x10;
	MODULE_P00.IOCR8.B.PC9 = 0x10;
	MODULE_P00.IOCR8.B.PC10 = 0x10;

	//Set P0.4(External SW1)
//	MODULE_P00.IOCR4.B.PC4 = 0b00010;
//	IfxPort_setPinModeInput(IfxPort_P00_4.port, IfxPort_P00_4.pinIndex, IfxPort_InputMode_pullUp);

	setLED1(iniFLamp);
}
int getLED1(void){
	return (MODULE_P00.OUT.B.P9 && MODULE_P00.OUT.B.P8);
}
void setLED1(int onoff)	// on if true, off if false
{
	if(onoff)
	{
		//HEADLAMP COLOR RED+GREEN
		//LED1_SET
		MODULE_P02.OUT.B.P3 = 1; // RED
		MODULE_P02.OUT.B.P4 = 1; // GREEN
		//MODULE_P02.OUT.B.P5 = 1; //BLUE

		//LED2_SET
		MODULE_P00.OUT.B.P8=1; //RED
		MODULE_P00.OUT.B.P9=1; //GREEN
		//MODULE_P00.OUT.B.P10=1; //BLUE

	}
	else
	{

		//LED1_OFF
		MODULE_P02.OUT.B.P3 = 0; //RED
		MODULE_P02.OUT.B.P4 = 0; //GREEN
		//MODULE_P02.OUT.B.P5 = 0; //BLUE

		//LED2_OFF
		MODULE_P00.OUT.B.P8=0;
		MODULE_P00.OUT.B.P9=0;
		//MODULE_P00.OUT.B.P10=1;
	}
//	if(onoff)
//	{
//		MODULE_P10.OUT.B.P2 = 1;
//	}
//	else
//	{
//		MODULE_P10.OUT.B.P2 = 0;
//	}
}

void setLED2(int onoff)
{
	if(onoff)
	{
		MODULE_P10.OUT.B.P1 = 1;
	}
	else
	{
		MODULE_P10.OUT.B.P1 = 0;
	}
}

void toggleLED1(void)
{
	MODULE_P10.OUT.B.P2 ^= 1;
}

void toggleLED2(void)
{
	MODULE_P10.OUT.B.P1 ^= 1;
}

int getSW1(void)
{
	return MODULE_P02.IN.B.P0; // return 1 if pushed, otherwise 0
}

int getSW2(void)
{
	return MODULE_P02.IN.B.P1;
}

int getSW3(void)
{
	return MODULE_P00.IN.B.P4;
}

int getSW1_Debounce(void)
{
	volatile int SW1, i, cnt = 0;
	volatile char buf[10] = { 0, };

	/* wait for last 10K SW1 states not change */
	while (cnt < 10000) {
		for (i = 0; i < 10; i++) {
			buf[i] = getSW1();
		}
		for (i = 0; i < 10; i++) {
			if (buf[0] != buf[i]) {
				cnt = 0;
			}
		}
		cnt += 1;
	}
	SW1 = buf[0];
	return SW1;
}

int getSW2_Debounce(void)
{
	volatile int SW2, i, cnt = 0;
	volatile char buf[10] = { 0, };

	/* wait for last 10K SW2 states not change */
	while (cnt < 10000) {
		for (i = 0; i < 10; i++) {
			buf[i] = getSW2();
		}
		for (i = 0; i < 10; i++) {
			if (buf[0] != buf[i]) {
				cnt = 0;
			}
		}
		cnt += 1;
	}
	SW2 = buf[0];
	return SW2;
}
