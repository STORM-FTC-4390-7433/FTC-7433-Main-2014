#include "drive.h"
#include "drive.c"
#include "gyro.h"
#include "gyro.c"
#ifndef GYROSYS_C
#define GYROSYS_C

void driveGyro (DriveSys t, int LeftMotorPower, int RightMotorPower) {
	motor[t.backLeft] = LeftMotorPower;
	motor[t.backRight] = RightMotorPower;
	motor[t.frontLeft] = LeftMotorPower;
	motor[t.frontRight] = RightMotorPower;
}

task turnBroooooo(){
	while(true) {
		wait1Msec(50);
		gyr.gyroscopeValue = SensorValue[S4]/20.;
	}
}

		if (gyr.gyroscopeValue > 25 && gyr.gyroscopeValue < 50) {
				wait1Msec(1000);
				motor[t.frontLeft] = 70;
				motor[t.frontRight] = 70;
	}
	#endif
