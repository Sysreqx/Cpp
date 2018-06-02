#include "JetSki.h"

JetSki::JetSki(std::string color, std::string model, int max_speed, int number_of_seats, int oarsN, bool hydrojet) : WaterVehicle(color, model, max_speed, number_of_seats, oarsN)
{
	this->hydrojet = hydrojet;
}

bool JetSki::hasHydrojet()
{
	return hydrojet;
}

void JetSki::setHydrojet(bool hydrojet)
{
	this->hydrojet = hydrojet;
}

void JetSki::info()
{
	WaterVehicle::info();
	std::cout << "Has hydrojet: " << hasHydrojet() << std::endl;
}
