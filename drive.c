#ifndef DRIVESYS_C
#define DRIVESYS_C

void updateDriveSys (DriveSys t, int LeftMotorPower, int RightMotorPower){

if(LeftMotorPower > 100){
	LeftMotorPower = 100;
}
else if(LeftMotorPower < -100){ //Caps motor power
	LeftMotorPower = -100;
}
if(RightMotorPower > 100){
	RightMotorPower = 100;
}
else if(RightMotorPower < -100){ //Slightly more efficient than before
	RightMotorPower = -100;
}

	motor[t.backLeft] = LeftMotorPower;
	motor[t.backRight] = -RightMotorPower;
	motor[t.frontLeft] = LeftMotorPower;
	motor[t.frontRight] = -RightMotorPower;

	return;
}

#endif
