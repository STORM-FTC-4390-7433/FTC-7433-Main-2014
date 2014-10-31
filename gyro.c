#ifndef GYROSYS_C
#define GYROSYS_C

void driveGyro (int LeftMotorPower, int RightMotorPower) {
	motor[backLeft] = LeftMotorPower;
	motor[backRight] = -RightMotorPower;
	motor[frontLeft] = LeftMotorPower;
	motor[frontRight] = -RightMotorPower;
}

task updateGyroSys(){
	driveGyro(100, 100);

	while(true) {
		wait1Msec(50);
		gyr.gyroscopeValue = SensorValue[S4]/20.;

		if (gyr.gyroscopeValue > 1) {
			while (gyr.gyroscopeValue > 1) {
				driveGyro(-50, 50);

		if (g.gyroscope > 0) {
			while (g.gyroscope > 0) {
				motor[t.FrontRight] = 50; //More witchcraft.
				motor[t.BackRight] = 50; //Whoever wrote this, please comment it!
				motor[t.FrontRight] = -50;
				motor[t.BackRight] = -50;

			}
	  }
		else if (gyr.gyroscopeValue < -1) {
			while (gyr.gyroscopeValue < -1) {
				driveGyro(50, -50);
			}
		}

		driveGyro(100, 100);
	}
}


	#endif
