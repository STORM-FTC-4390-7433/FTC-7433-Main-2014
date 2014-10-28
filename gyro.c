
#ifndef GYROSYS_C
#define GYROSYS_C

task updateGyroSys( DriveSys t, GyroSys g) {

	while(true) {
		wait1Msec(50);
		g.gyroscope = sensorValue[S4]/20.;

		if (g.gyroscope > 0) {
			while (g.gyroscope > 0) {
				motor[t.FrontRight] = 50;
				motor[t.BackRight] = 50;
				motor[t.FrontRight] = -50;
				motor[t.BackRight] = -50;
			}
		}
		else if (g.gyroscope < 0) {
			while (g.gyroscope < 0) {
				motor[t.FrontRight] = -50;
				motor[t.BackRight] = -50;
				motor[t.FrontRight] = 50;
				motor[t.BackRight] = 50;
			}
		}
	#endif
