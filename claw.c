#ifndef CLAWSYS_C
#define CLAWSYS_C

void updateClawSys (ClawSys t, bool ButtonB, bool ButtonX){

/* Below code only moves one way and stops? */
	if(!t.isDisabled){
		if(ButtonB){
			servo[t.claw] = 100; //If B button pressed, drop claw.
		}
		if (ButtonX) {
			servo[t.claw] = 235; //If X button pressed, lift claw.
		}
	}
	return;
	}

void updateClawSys (ClawSys t, bool isRaised){
	if(isRaised){
		servo[t.claw] = 100; //If B button pressed, drop claw.
	}else{
		servo[t.claw] = 235; //If X button pressed, lift claw.
	}

	return;
}

	#endif
