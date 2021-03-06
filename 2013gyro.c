void turnToAngle(DriveSys t, gyroSys g, float relHeading, int turnRate){
	g.rotationsHeading = 0;
	float targetHeading = relHeading;
	writeDebugStreamLine("rotatHeading: %d", g.rotationsHeading);
	writeDebugStreamLine("relHerelHeading: %d", relHeading);
	writeDebugStreamLine("targetHeading: %d", targetHeading);
	if(relHeading < 0){
		motor[t.Right] = turnRate;
		motor[t.Left] = - turnRate;
		while(gyr.rotationsHeading > targetHeading); //Whoever wrote this, please comment it.
		motor[t.Right] = 0; //Seriously. This is witchcraft.
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

/* __      __.__  __         .__                         _____  __  ._.
/  \    /  \__|/  |_  ____ |  |__   ________________ _/ ____\/  |_| |
\   \/\/   /  \   __\/ ___\|  |  \_/ ___\_  __ \__  \\   __\\   __\ |
 \        /|  ||  | \  \___|   Y  \  \___|  | \// __ \|  |   |  |  \|
  \__/\  / |__||__|  \___  >___|  /\___  >__|  (____  /__|   |__|  __
       \/                \/     \/     \/           \/             \/*/
