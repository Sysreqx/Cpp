#include "Bicycle.h"

void Bicycle::stop()
{
	std::cout << "Велосипед остановился";
}

void Bicycle::start()
{
	std::cout << "Велосипед поехал";
}

Bicycle::Bicycle(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, std::string typeOfSeat) : GroundVehicle(color, model, max_speed, number_of_seats, engine_power)
{
	this->typeOfSeat = typeOfSeat;
}

std::string Bicycle::getTypeOfSeat()
{
	return std::string();
}

void Bicycle::setTypeOfSeat(std::string typeOfSeat)
{
	this->typeOfSeat = typeOfSeat;
}

void Bicycle::info()
{
	GroundVehicle::info();
	std::cout << "Type of seat: " << typeOfSeat << std::endl << std::endl;
}
