#ifndef GATESYS_C
#define GATESYS_C

void updateGateSys (GateSys t, bool ButtonB, bool ButtonX){

/* Below code only moves one way and stops? */

	if(ButtonB){
		servo[t.gate] = 90; //If B button pressed, move gate.
	}
	if (ButtonX) {
		servo[t.gate] = 0; //If X button pressed, stop gate.
	}

	return;
	}

	#endif
