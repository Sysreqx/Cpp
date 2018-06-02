#include "Car.h"



void Car::stop()
{
	std::cout << "Car stop";
}

void Car::start()
{
	std::cout << "Car start";
}

Car::Car(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, int number_of_wheels):GroundVehicle(color, model, max_speed, number_of_seats,engine_power)
{
	this->number_of_wheels = number_of_wheels;
}

void Car::setNumberOfWheels(int number_of_wheels)
{
	this->number_of_wheels = number_of_wheels;
}

void Car::info() const
{
	GroundVehicle::info();
	std::cout << "number_of_wheels" << number_of_wheels <<
		std:: endl;
}


