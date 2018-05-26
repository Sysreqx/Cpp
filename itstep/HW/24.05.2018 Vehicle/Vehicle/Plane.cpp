#include "Plane.h"

Plane::Plane(std::string color, std::string model, int max_speed, int number_of_seats, int altitude, int lengthOfWing) : AirVehicle(color, model, max_speed, number_of_seats, altitude)
{
	this->lengthOfWing = lengthOfWing;
}

void Plane::setLengthOfWing(int lengthOfWing)
{
	this->lengthOfWing = lengthOfWing;
}

void Plane::info()
{
	AirVehicle::info();
	std::cout << "The length of the wing: " << lengthOfWing << std::endl << std::endl;
}

int Plane::getLengthOfWing()
{
	return lengthOfWing;
}
