#include "Crossroad.h"
#include "VehicleStore.h"

int main()
{
	VehicleStore vs("Whatever name");
	vs.addVehicle(new Bike("Black", "BMX", 200, 1, 2000, 0, 100));
	vs.addVehicle(new Car("Red", "Alfa Romeo", 300, 4, 5000, 700, 4));
	vs.addVehicle(new Boat("Blue", "Plavun", 250, 2, 35000, "Good", "Sailboat"));
	vs.addVehicle(new Plane("White", "Eclipse 500", 694, 4, 1500000, 657, "BlueSky"));
	vs.addVehicle(new Bus("Yellow", "4X", 300, 4, 43000, 700, 228));
	vs.addVehicle(new Tank("Destroyer", 200, 6, 200000, 1800, 9999));
	vs.addVehicle(new WaterScooter("Blue", "WaveRunner", 80, 2, 7000, "Good", "WaveRunner"));
	vs.addVehicle(new Helicopter("Orange", "Hughes TH-55 Osage", 153, 3, 3110, 3110, 4));
	vs.getInfo();
	vs.saveToFile();

	vs.readFromFile();
	vs.getInfo();

	system("pause");
	return 0;
}