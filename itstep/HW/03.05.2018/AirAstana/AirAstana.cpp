#include "AirAstana.h"

std::string AirAstana::getDestination() const
{
	return Destination;
}

std::string AirAstana::getTypeOfAircraft() const
{
	return TypeOfAircraft;
}

std::string AirAstana::getDepartureTime() const
{
	return DepartureTime;
}

std::string AirAstana::getDepartureTime()
{
	return DepartureTime;
}

std::string AirAstana::getDaysOfTheWeek() const
{
	return DaysOfTheWeek;
}

int AirAstana::getFlightNumber() const
{
	return FlightNumber;
}

void AirAstana::setDestination(std::string Destination)
{
	this->Destination = Destination;
}

void AirAstana::setTypeOfAircraft(std::string TypeOfAircraft)
{
	std::string p = "Passenger", b = "Bagage", c = "Cargo";
	if (TypeOfAircraft != p ||
		TypeOfAircraft != c ||
		TypeOfAircraft != b)
		TypeOfAircraft == p;
	this->TypeOfAircraft = TypeOfAircraft;
}

void AirAstana::setDepartureTime(int Hour, int Minutes)
{
	if (Hour <= 9 || Hour > 23)
		this->DepartureTime = "0";
	DepartureTime += std::to_string(Hour) + ":";
	if (Minutes <= 9 || Minutes > 59)
		DepartureTime += "0";
	DepartureTime += std::to_string(Minutes);
}

void AirAstana::setDaysOfTheWeek(std::string DaysOfTheWeek)
{
	if (DaysOfTheWeek != "Monday" ||
		DaysOfTheWeek != "Tuesday" ||
		DaysOfTheWeek != "Wednesday" ||
		DaysOfTheWeek != "Thursday" ||
		DaysOfTheWeek != "Friday" ||
		DaysOfTheWeek != "Saturday" ||
		DaysOfTheWeek != "Sunday")
		this->DaysOfTheWeek = DaysOfTheWeek;
	else
		DaysOfTheWeek = "Monday";
}

void AirAstana::setFlightNumber(int FlightNumber)
{
	this->FlightNumber = FlightNumber;
}

AirAstana::AirAstana(std::string Destination, std::string TypeOfAircraft, int Hour, int Minutes, std::string DaysOfTheWeek, int FlightNumber)
{
	//конец объявления
	setDestination(Destination);
	setTypeOfAircraft(TypeOfAircraft);
	setDepartureTime(Hour, Minutes);
	setDaysOfTheWeek(DaysOfTheWeek);
	setFlightNumber(FlightNumber);
}

AirAstana::~AirAstana()
{
}

std::ostream & operator<<(std::ostream & out, const AirAstana & a)
{
	out << "\nFlight Number : " << a.getFlightNumber()
		<< "\nType of Aircraft : " << a.getTypeOfAircraft()
		<< "\nDestination :  " << a.getDestination()
		<< "\nDay : " << a.getDaysOfTheWeek()
		<< "\nDeparture Time : " << a.getDepartureTime()
		<< "\n";
	return out;
}
