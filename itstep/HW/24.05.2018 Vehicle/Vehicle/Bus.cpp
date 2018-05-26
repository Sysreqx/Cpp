#include "Bus.h"


Bus::Bus(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, int numberOfDeck) : GroundVehicle(color, model, max_speed, number_of_seats, engine_power)
{
	this->numberOfDeck = numberOfDeck;
}

void Bus::setNumberOfDeck(int numberOfDeck)
{
	this->numberOfDeck = numberOfDeck;
}

void Bus::info()
{
	GroundVehicle::info();
	std::cout << "Number of Deck: " << numberOfDeck << std::endl << std::endl;
}

int Bus::getNumberOfDeck()
{
	return numberOfDeck;
}
