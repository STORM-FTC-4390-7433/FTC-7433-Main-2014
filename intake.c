#ifndef INTAKESYS_C
#define INTAKESYS_C

void updateIntakeSys (IntakeSys t, bool LeftTrigger, bool RightTrigger){


	if(RightTrigger){
		Motor[t.intake] = 100;
	}else if(LeftTrigger){
		Motor[t.intake] = -100;
	}
	else {
		Motor[t.intake] = 0;
	}
	return;
}

#endif
