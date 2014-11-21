#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTMotor)
#pragma config(Hubs,  S2, HTServo,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     frontLeftMotor, tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     frontRightMotor, tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     backLeftMotor, tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     backRightMotor, tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     frontLiftMotor, tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     backLiftMotor, tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_1,     intakeMotor,   tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_2,     motorK,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S2_C1_1,    gateServo,            tServoStandard)
#pragma config(Servo,  srvo_S2_C1_2,    clawServo,            tServoStandard)
#pragma config(Servo,  srvo_S2_C1_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_6,    servo6,               tServoNone)
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
IntakeSys intake; //Control variables
GateSys gate;

void initializeRobot(){ //Init function
	drive.backLeft = backLeftMotor;
	drive.backRight = backRightMotor;
	drive.frontRight = frontRightMotor; //Control variable declaration
	drive.frontLeft = frontLeftMotor;
	gate.gate = gateServo;
	lift.frontLift = frontLiftMotor;
	lift.backLift = backLiftMotor;
	intake.intake = intakeMotor;

	return;
}

task main() { //MAIN FUNCTION

	initializeRobot(); //Inits robot

	#ifdef COMPETITION
	waitForStart(); //Waits for start
	#endif

	while(true)
  	{
       getJoystickSettings(joystick);

       updateDriveSys (drive, joystick.joy1_y1*(100/128.0), joystick.joy1_y2*(100/128.0)); //When joystick Y moved, change motor values
       updateLiftSys (lift, joy2Btn(4), joy2Btn(2)); //Y or A buttons pressed, update lift
       updateIntakeSys (intake, joy1Btn(7), joy1Btn(8)); //Left or Right trigger pressed, update intake
       updateGateSys (gate, joy2Btn(3), joy2Btn(1)); //B or X button pressed, update gate

    }
}
