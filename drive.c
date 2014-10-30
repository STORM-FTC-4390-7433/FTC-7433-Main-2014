#ifndef DRIVESYS_C
#define DRIVESYS_C

void updateDriveSys (DriveSys t, int LeftMotorPower, int RightMotorPower){

if(LeftMotorPower > 100){
	LeftMotorPower = 100;}

if(LeftMotorPower < -100){
	LeftMotorPower = -100;} //Places a cap on motor power

if(RightMotorPower > 100){
	RightMotorPower = 100;}

if(RightMotorPower < -100){
	RightMotorPower = -100;}

	motor[t.BackLeft] = LeftMotorPower;
	motor[t.BackRight] = -RightMotorPower;
	motor[t.FrontLeft] = LeftMotorPower;
	motor[t.FrontRight] = -RightMotorPower;

	return;
}

#endif
