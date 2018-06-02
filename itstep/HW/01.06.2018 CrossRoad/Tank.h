#pragma once
#include "GroundVehicle.h"
class Tank : public GroundVehicle
{
	int damage;
public:

	void stop() override;
	void start() override;
	int getDamage()const { return damage; }
	void setDamage(int damage);
	void info()const;
	Tank(std::string model, int max_speed, int number_of_seats, int engine_power);
};

