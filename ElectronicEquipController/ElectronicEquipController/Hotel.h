#include<string.h>
#include"Header.h"
#include"Floor.h"

using namespace std;
class Hotel{
	string name;
	vector<Floor> floor;

public:
	string getName() {
		return name;
	}

	vector<Floor> getFloor() {
		return floor;
	}
};
