#include "Tank.h"



void Tank::stop()
{
	std::cout << "Tank stop";
}

void Tank::start()
{
	std::cout << "Tank start";
}

void Tank::setDamage(int damage)
{
	this->damage = damage;
}

void Tank::info() const
{
	std::cout << "Model: " << getModel() << "\nNumber of seats: " << getNumberOfSeats() << "\nMaximal speed: " << getMaxSpeed() << "\nEngine power " << getEnginePower() << std::endl;
	std::cout <<"Damage: "<< damage << std::endl;
}

Tank::Tank(std::string model, int max_speed, int number_of_seats, int engine_power) :GroundVehicle("green",model, max_speed, number_of_seats, engine_power)
{
	this->damage = 100;
}

