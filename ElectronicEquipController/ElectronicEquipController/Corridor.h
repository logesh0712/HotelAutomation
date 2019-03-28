#include"Equipment.h"
#include"Light.h"
#include"AC.h"

class Corridor {
	int corridorId;
	Light light;
	AC ac;

public:

	Corridor() {
	
	}

	Corridor(Light light, AC ac) {
		this->light = light;
		this->ac = ac;
	}

	int getCorridorId() {
		return corridorId;
	}

	Light getLight() {
		return light;
	}

	AC getAc() {
		return ac;
	}
};