#pragma once
#include <string>
#include <iostream>

class Vehicle
{
private:
	std::string color;
	std::string model;
	int max_speed;
	int number_of_seats;
public:
	//set
	void setColor(std::string color);
	void setModel(std::string model);
	void setMaxSpeed(int max_speed);
	void setNumberOfSeats(int number_of_seats);
	//get
	std::string getColor() const { return color; }
	std::string getModel() const { return model; }
	int getMaxSpeed() const { return max_speed; }
	int getNumberOfSeats() const { return number_of_seats; }
	void info() const;
	Vehicle(std::string color, std::string model, int max_speed, int number_of_seats);
};

