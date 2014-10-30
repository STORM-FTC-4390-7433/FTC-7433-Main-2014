
#ifndef GYROSYS_C
#define GYROSYS_C

task updateGyroSys( DriveSys t, GyroSys g) {

	while(true) {
		wait1Msec(50);
		g.gyroscope = sensorValue[S4]/20.;

		if (g.gyroscope > 0) {
			while (g.gyroscope > 0) {
				motor[t.FrontRight] = 50; //More witchcraft.
				motor[t.BackRight] = 50; //Whoever wrote this, please comment it!
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

	/* __      __.__  __         .__                         _____  __  ._.
/  \    /  \__|/  |_  ____ |  |__   ________________ _/ ____\/  |_| |
\   \/\/   /  \   __\/ ___\|  |  \_/ ___\_  __ \__  \\   __\\   __\ |
 \        /|  ||  | \  \___|   Y  \  \___|  | \// __ \|  |   |  |  \|
  \__/\  / |__||__|  \___  >___|  /\___  >__|  (____  /__|   |__|  __
       \/                \/     \/     \/           \/             \/*/
