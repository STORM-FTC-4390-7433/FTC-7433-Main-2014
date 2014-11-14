#ifndef LIFTSYS_C
#define LIFTSYS_C

void updateLiftSys (LiftSys t, bool ButtonY, bool ButtonA ){

	if(ButtonY){
		motor[t.frontLift] = 100;
		motor[t.backLift] = 100;//Y button pressed, raise lift.
	}
	else if(ButtonA){
		motor[t.frontLift] = -100;
		motor[t.backLift] = -100; //A button pressed, lower lift.
	}
	else {
		motor[t.frontLift] = 0;
		motor[t.backLift] = 0; //No button pressed, stop lift.
	}


	return;
}

#endif
