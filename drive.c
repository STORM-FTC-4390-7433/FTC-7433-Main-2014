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
	motor[t.BackRight] = RightMotorPower; //Sets motor power to calculated values above.
	motor[t.FrontLeft] = LeftMotorPower; //If no code is written between the 'ifs' and these statements, these could be moved inside the 'if' statements.
	motor[t.FrontRight] = RightMotorPower;

	return;
}

#endif
