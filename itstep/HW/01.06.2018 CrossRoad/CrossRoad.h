#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include "Bicycle.h"
#include "Bus.h"
#include "Car.h"
#include "Tank.h"
#include <Windows.h>
using namespace std;

class CrossRoad
{
private:
	vector<auto_ptr<Vehicle>> traffic;
	vector<auto_ptr<Vehicle>> traffic1;
	vector<auto_ptr<Vehicle>> traffic2;
	int durationRed;
	int durationGreen;
	int cntVehiclePerMinute;
	int averageVehicle;

	//random vehicle
	Vehicle* randomVehicle();

public:
	CrossRoad(int durationRed, int durationGreen, 
		int cntVehiclePerMinute, int averageVehicle);
	void setDurRed(int durationRed);
	void setDurGreen(int durationGreen);
	void setOneVCT(int cntVehiclePerMinute);
	void setAverageVehicle(int averageVehicle);

	int getDurRed() const;
	int getAverageVehicle() const;
	int getDurGreen() const;
	int getOneVCT() const;


	void redLightOn();
	void greenLightOn();

	void print() const;

};

