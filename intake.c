#ifndef INTAKESYS_C
#define INTAKESYS_C

void updateIntakeSys (IntakeSys t, bool LeftTrigger, bool RightTrigger){


	if(RightTrigger){
		motor[t.intake] = 100;
	}else if(LeftTrigger){
		motor[t.intake] = -100;
	}
	else {
		motor[t.intake] = 0;
	}
	return;
}

#endif
