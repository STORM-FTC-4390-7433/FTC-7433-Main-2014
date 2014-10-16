#ifndef LIFTSYS_C
#define LIFTSYS_C

void updateLiftSys (LiftSys t, bool ButtonY, bool ButtonA ){

	if(ButtonY){
		motor[t.Lift] = 100;
	}
	else if(ButtonA){
		motor[t.Lift] = -100;
	}
	else {
		motor[t.Lift] = 0;
	}


	return;
}

#endif
