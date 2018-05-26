#pragma once
#include "WaterVehicle.h"
class Boat :
	public WaterVehicle
{
public:
	Boat(std::string color, std::string model, int max_speed, int number_of_seats, int oarsN, std::string material);
	std::string getMaterial();
	void setMaterial(std::string material);
	void info();
private:
	std::string material;
};

