#ifndef DRIVESYS_H
#define DRIVESYS_H

typedef struct {
	//pointers to motors in the array motor[]
	//frontLeft and frontRight should have motorEncoders mounted
	tMotor Left,
		   Right;
	long long int rightEncoder, leftEncoder;
	long long int lastEncodRead;
} DriveSys;

#endif
