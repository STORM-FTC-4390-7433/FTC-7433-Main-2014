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
			}
		}
		else if (gyr.gyroscope < -1) {
			while (gyr.gyroscope < -1) {
				driveGyro(50, -50);
			}
	  }

		driveGyro(100, 100);
	}
}


	#endif
