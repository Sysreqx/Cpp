#pragma once
#include "AirVehicle.h"
class Helicopter :
	public AirVehicle
{
public:
	Helicopter(std::string color, std::string model, int max_speed, int number_of_seats, int altitude, double rotorDiameter);
	double getRotorDiameter();
	void setRotorDiameter(double rotorDiameter);
	void info();
private:
	double rotorDiameter;
};

