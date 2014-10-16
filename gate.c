#ifndef GATESYS_C
#define GATESYS_C

void updateGateSys (GateSys t, bool ButtonB, bool ButtonX){

	if(ButtonB){
		servo[t.gate] = 90;
	}
	if (ButtonX) {
		servo[t.gate] = 0;
	}

	return;
	}

	#endif
