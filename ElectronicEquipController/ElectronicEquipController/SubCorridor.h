class SubCorridor : public Corridor {
	State state;

public:
	SubCorridor() {
		
	}

	void setSubCorridorState(State state) {
		this->state = state;
	}

	State getSubCorridorState() {
		return this->state;
	}
};