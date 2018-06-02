#pragma once
#include "Vehicle.h"
class AirVehicle :
	public Vehicle
{
	int altitude;	
public:
	AirVehicle(std::string color, std::string model, int max_speed, int number_of_seats, int altitude);
	int getAltitude() const { return altitude; }
	void setAltitude(int altitude);
	void info()const;
};

