void turnToAngle(DriveSys t, gyroSys g, float relHeading, int turnRate){
	g.rotationsHeading = 0;
	float targetHeading = relHeading;
	writeDebugStreamLine("rotatHeading: %d", g.rotationsHeading);
	writeDebugStreamLine("relHerelHeading: %d", relHeading);
	writeDebugStreamLine("targetHeading: %d", targetHeading);
	if(relHeading < 0){
		motor[t.Right] = turnRate;
		motor[t.Left] = - turnRate;
		while(gyr.rotationsHeading > targetHeading);
		motor[t.Right] = 0;
		motor[t.Left] = 0;
	} else if (relHeading > 0){
		motor[t.Right] = - turnRate;
		motor[t.Left] =  turnRate;
		while(gyr.rotationsHeading < targetHeading){
			writeDebugStreamLine("rotationsHeading: %d", gyr.rotationsHeading);
			wait1Msec(10);
		}
		motor[t.Right] = 0;
		motor[t.Left] = 0;
	} else {
		return;
	}
	return;
}
