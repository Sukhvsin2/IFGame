class Player{
  public:
    Player(){
		lastLocation = NULL;
		currentLocation = NULL;
	}

	void setCurrent(areaNode* loc){
        lastLocation = currentLocation;
		currentLocation = loc;
	}

	bool playerMoved(){
		return !(lastLocation == currentLocation);
	}
	areaNode* getCurrent(){
		return currentLocation;
	}

	//isGameOver should return: 0 for continue, 1 for win, 2 for lose
	int isGameOver(){
        if(currentLocation->info.getGoal() && !currentLocation->info.getID()) return 1;
        else if(!currentLocation->info.getGoal() && currentLocation->info.getID()) return 2;
        return 0;
	}

  private:
		areaNode* currentLocation;
		areaNode* lastLocation;

};
