#ifndef BSW_IO_MOTOR_H_
#define BSW_IO_MOTOR_H_

void Init_DCMotor(void);
void Init_DCMotorPWM(void);

void movChA(int dir);
void movChB(int dir);

void stopCh(unsigned int mode);
void stopChA(void);
void stopChB(void);

void movCh(unsigned int mode,int duty, int dir);
void movChA_PWM(int duty, int dir);
void movChB_PWM(int duty, int dir);

#endif /* BSW_IO_MOTOR_H_ */
