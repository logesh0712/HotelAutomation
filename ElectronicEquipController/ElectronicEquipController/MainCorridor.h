#include<vector>
#include"Corridor.h"
#include"SubCorridor.h"

using namespace std;

class MainCorridor : public Corridor {
	
	vector<SubCorridor> subCorridor;
	
	MainCorridor(vector<SubCorridor> subCorridor) {
		this->subCorridor = subCorridor;
	}

public:
	vector<SubCorridor> getSubCorridor() {
		return subCorridor;
	}

	int getSubCorridorSize() {
		return subCorridor.size();
	}
};