#pragma once
#include "GroundVehicle.h"
class Bicycle :
	public GroundVehicle
{
public:
	void stop() override;
	void start() override;
	Bicycle(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, std::string typeOfSeat);
	std::string getTypeOfSeat();
	void setTypeOfSeat(std::string typeOfSeat);
	void info();
private:
	std::string typeOfSeat;
};

