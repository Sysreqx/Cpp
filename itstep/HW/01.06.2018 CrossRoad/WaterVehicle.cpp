#include "WaterVehicle.h"


WaterVehicle::WaterVehicle(std::string color, std::string model, int max_speed, int number_of_seats, int oarsN) : Vehicle(color, model, max_speed, number_of_seats)
{
	setOars(oarsN);
}

int WaterVehicle::getOars()
{
	return oarsN;
}

void WaterVehicle::setOars(int oarsN)
{
	this->oarsN = oarsN;
}

void WaterVehicle::info()
{
	Vehicle::info();
	std::cout << "Number of oars: " << oarsN << std::endl;
}
