#ifndef GYROSYS_H
#define GYROSYS_H

typedef struct {

	tSensors gyroscope;// gives degrees change per second
	float targetAngle;
	float gyroscopeValue;

} GyroSys;

#endif
