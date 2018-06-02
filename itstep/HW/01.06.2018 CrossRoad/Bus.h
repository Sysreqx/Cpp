#pragma once
#include "GroundVehicle.h"
class Bus :
	public GroundVehicle
{
public:
	void start() override;
	void stop() override;
	Bus(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, int numberOfDeck);
	void setNumberOfDeck(int numberOfDeck);
	void info();
	int getNumberOfDeck();
private:
	int numberOfDeck;
};

