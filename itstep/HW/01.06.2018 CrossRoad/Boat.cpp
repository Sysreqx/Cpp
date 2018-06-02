#include "Boat.h"

Boat::Boat(std::string color, std::string model, int max_speed, int number_of_seats, int oarsN, std::string material) : WaterVehicle(color, model, max_speed, number_of_seats, oarsN)
{
	this->material = material;
}

std::string Boat::getMaterial()
{
	return material;
}

void Boat::setMaterial(std::string material)
{
	this->material = material;
}

void Boat::info()
{
	WaterVehicle::info();
	std::cout << "It's made of a material: " << getMaterial() << std::endl;
}
