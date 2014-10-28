#ifndef INTAKESYS_C
#define INTAKESYS_C

void updateIntakeSys (IntakeSys t, bool LeftTrigger, bool RightTrigger){


	if(RightTrigger){
		motor[t.intake] = 100; //Right trigger pressed, rotate intake one way
	}else if(LeftTrigger){
		motor[t.intake] = -100; //Left trigger pressed, rotate the other way
	}
	else {
		motor[t.intake] = 0; //No trigger pressed, stop rotation.
	}
	return;
}

#endif
