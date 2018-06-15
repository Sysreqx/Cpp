#include "Tank.h"
#include "Boat.h"
#include "JetSki.h"
#include "Bicycle.h"
#include "Bus.h"
#include "Plane.h"
#include "Helicopter.h"

void main()
{
	WaterVehicle w("White", "Sail–driven", 15, 100, 0);
	w.info();
	std::cout << std::endl;
	Boat b("White", "Oaks-driven", 4, 100, 2, "Wood");
	b.info();
	std::cout << std::endl;
	JetSki j("White", "Wake", 40, 1, 0, true);
	j.info();
	std::cout << std::endl;
	Bicycle bb("White", "Pegas", 270, 1, 0, "Hard Seat");
	bb.info();
	Bus bus("White", "Double-Decker", 140, 27, 450, 2);
	bus.info();
	Plane p("White", "Eclipse 500", 694, 4, 657, 11);
	p.info();
	Helicopter h("Orange", "Hughes TH-55 Osage", 153, 3, 3110, 7.6);
	h.info();
	system("pause");
}