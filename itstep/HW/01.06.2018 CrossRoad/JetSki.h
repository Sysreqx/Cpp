#pragma once
#include "WaterVehicle.h"
class JetSki :
	public WaterVehicle
{
public:
	JetSki(std::string color, std::string model, int max_speed, int number_of_seats, int oarsN, bool hydrojet);
	bool hasHydrojet();
	void setHydrojet(bool hydrojet);
	void info();
private:
	bool hydrojet;
};

