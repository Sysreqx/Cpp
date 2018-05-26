#include "Vehicle.h"

void Vehicle::setColor(std::string color)
{
	this->color = color;
}

void Vehicle::setModel(std::string model)
{
	this->model = model;
}

void Vehicle::setMaxSpeed(int max_speed)
{
	this->max_speed = max_speed;
}

void Vehicle::setNumberOfSeats(int number_of_seats)
{
	this->number_of_seats = number_of_seats;
}

void Vehicle::info() const
{
	std::cout << "Model: " << model << "\nColor: " << color << "\nNumber of seats: " << number_of_seats << "\nMaximal speed: " << max_speed << std::endl;
}

Vehicle::Vehicle(std::string color, std::string model, int max_speed, int number_of_seats)
{
	setColor(color);
	setModel(model);
	setMaxSpeed(max_speed);
	setNumberOfSeats(number_of_seats);
}

