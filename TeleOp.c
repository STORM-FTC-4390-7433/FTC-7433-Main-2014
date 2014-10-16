#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     backLeft,      tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     backRight,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     frontLeft,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     frontRight,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     liftMotor,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     intakeMotor,   tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C4_1,    gateServo,            tServoStandard)
#pragma config(Servo,  srvo_S1_C4_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define COMPETITION

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.
#include "drive.h"
#include "drive.c"
#include "lift.h"
#include "lift.c"
#include "intake.h"
#include "intake.c"
#include "gate.h"
#include "gate.c"

DriveSys drive;
LiftSys lift;
IntakeSys intake;
GateSys gate;

void initializeRobot(){
	drive.BackLeft = backLeft;
	drive.BackRight = backRight;
	drive.FrontRight = frontRight;
	drive.FrontLeft = frontLeft;
	gate.gate = gateServo;
	lift.lift = liftMotor;
	intake.intake = intakeMotor;

	return;
}

task main() {

	initializeRobot();

	#ifdef COMPETITION
	waitForStart();
	#endif

	while(true)
  	{
       getJoystickSettings(joystick);

       updateDriveSys (drive, joystick.joy1_y1*(100/128), joystick.joy1_y2*(100/128));
       updateLiftSys (lift, joy2Btn(4), joy2Btn(2));
       updateIntakeSys (intake, joy1Btn(7), joy1Btn(8));
       updateGateSys (gate, joy2Btn(3), joy2Btn(1));

    }
}
