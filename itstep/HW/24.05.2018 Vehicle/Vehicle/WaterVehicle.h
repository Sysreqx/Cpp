#pragma once
#include "Vehicle.h"
class WaterVehicle : public Vehicle
{
public:
	WaterVehicle(std::string color, std::string model, int max_speed, int number_of_seats, int oarsN);
	int getOars();
	void setOars(int oarsN);
	void info();
private:/*
	bool hasOars;
	bool hasMotor;*/
	int oarsN;
};

