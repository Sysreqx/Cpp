#include "Helicopter.h"

Helicopter::Helicopter(std::string color, std::string model, int max_speed, int number_of_seats, int altitude, double rotorDiameter) : AirVehicle(color, model, max_speed, number_of_seats, altitude)
{
	this->rotorDiameter = rotorDiameter;
}

double Helicopter::getRotorDiameter()
{
	return rotorDiameter;
}

void Helicopter::setRotorDiameter(double rotorDiameter)
{
	this->rotorDiameter = rotorDiameter;
}

void Helicopter::info()
{
	AirVehicle::info();
	std::cout << "Rotor Diameter: " << rotorDiameter << std::endl << std::endl;
}
