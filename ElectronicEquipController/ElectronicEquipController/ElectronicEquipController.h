#include"Hotel.h"
#include"MainCorridor.h"
#include<map>

class ElectronicEquipController
{
	static ElectronicEquipController *instance;
	Hotel *hotelRef;
	int controllerId;

	/*floor no , its power condition*/
	map<int, int> powerCondition;

	ElectronicEquipController() {
		
	}

	bool isNightTime() {
		//This will calculate and return true only between 6PM to 6AM
		return true;
	}
	
	void offSubCorridorAc(Floor floor);
	void onSubCorridorLight(Floor floor, MainCorridor mainCorridor, SubCorridor subCorrdior);
	void onSubCorridorAC(Floor floor, MainCorridor mainCorridor, SubCorridor subCorridor);
	void offSubCorridorLight(Floor floor, MainCorridor mainCorridor, SubCorridor subCorrdior);
	void offSubCorridorAC(Floor floor, MainCorridor mainCorridor, SubCorridor subCorridor);
	void powerConsumptionConditionCalc();

public:
	ElectronicEquipController* getInstance() {
		if (instance != NULL) {
			instance = new ElectronicEquipController();
		}
		return instance;
	}

	void setHotelRef(Hotel *hotel) {
		this->hotelRef = hotel;
		powerConsumptionConditionCalc();
	}

	//For all floor when in time range, 
	void onMainCorridorEquipments();
	void offMainCorridorEquipments();

	/*	When every sub corridor equipment is switched on/off we are updating the power consumption
		Based on power consumption , we will decide whether to switch on ac or not in appropriate sub corridor.
		if every input is null , we can shut down all sub corridor if time limit exceeds.
	*/
	void onSubCorridorEquipments(Floor floor, MainCorridor mainCorridor, SubCorridor subCorrdior);
	void offSubCorridorEquipments(Floor floor, MainCorridor mainCorridor, SubCorridor subCorrdior);

};
