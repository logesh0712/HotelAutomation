#include"Enums.h"

class Equipment {
	int powerUnit;
	State state;

public:

	Equipment() {
	
	}

	Equipment(int powerUnit) {
		this->powerUnit = powerUnit;
	}

	void setState(State state) {
		this->state = state;
	}

	State getState() {
		return state;
	}
};