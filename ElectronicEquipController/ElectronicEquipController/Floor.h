#include"Corridor.h"
#include"Header.h"

class Floor {
	int floorNo;
	vector<MainCorridor> mainCorridor;

public:
	int getFloorNo() {
		return floorNo;
	}

	vector<MainCorridor> getMainCorridor() {
		return mainCorridor;
	}

	int getMainCorridorSize() {
		return mainCorridor.size();
	}
};