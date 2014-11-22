#ifndef LIFTSYS_C
#define LIFTSYS_C

void updateLiftSys (LiftSys t, bool ButtonY, bool ButtonA, ClawSys c){

	if(ButtonY){
		motor[t.frontLift] = 100;
		motor[t.backLift] = 100;//Y button pressed, raise lift.
		updateClawSys(c, false); //make sure that the claw is ALWAYS LOWERED while the lift sys is up.
		c.isDisabled = true; //ensure that the claw cannot be used while lift is up
	}
	else if(ButtonA){
		motor[t.frontLift] = -100;
		motor[t.backLift] = -100; //A button pressed, lower lift.
		c.isDisabled = false; //whenever the lift lower begins, reenable the claw.
	}
	else {
		motor[t.frontLift] = 0;
		motor[t.backLift] = 0; //No button pressed, stop lift.
	}


	return;
}

#endif
