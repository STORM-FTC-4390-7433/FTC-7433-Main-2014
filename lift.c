#ifndef LIFTSYS_C
#define LIFTSYS_C

void updateLiftSys (LiftSys t, bool ButtonY, bool ButtonA ){

	if(ButtonY){
		motor[t.lift] = 100;
	}
	else if(ButtonA){
		motor[t.lift] = -100;
	}
	else {
		motor[t.lift] = 0;
	}


	return;
}

#endif
