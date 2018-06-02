#pragma once
#include "AirVehicle.h"
class Plane :
	public AirVehicle
{
public:
	Plane(std::string color, std::string model, int max_speed, int number_of_seats, int altitude, int lengthOfWing);
	void setLengthOfWing(int lengthOfWing);
	void info();
	int getLengthOfWing();
private:
	int lengthOfWing;
};

