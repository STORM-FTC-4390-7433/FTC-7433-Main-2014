#ifndef LIFTSYS_C
#define LIFTSYS_C

void updateLiftSys (LiftSys t, bool ButtonY, bool ButtonA ){

	if(ButtonY){
		motor[t.lift] = 100; //Y button pressed, raise lift.
	}
	else if(ButtonA){
		motor[t.lift] = -100; //A button pressed, lower lift.
	}
	else {
		motor[t.lift] = 0; //No button pressed, stop lift.
	}


	return;
}

#endif
