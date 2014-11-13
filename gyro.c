#ifndef GYROSYS_C
#define GYROSYS_C

void driveGyro (DriveSys t, int LeftMotorPower, int RightMotorPower) {
	motor[t.backLeft] = LeftMotorPower;
	motor[t.backRight] = -RightMotorPower;
	motor[t.frontLeft] = LeftMotorPower;
	motor[t.frontRight] = -RightMotorPower;
}

task updateGyroSys(){
	driveGyro(drive, 100, 100);

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
