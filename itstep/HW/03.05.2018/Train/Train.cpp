#include "Train.h"

Train::Train(std::string Destination, int Hour, int Minutes, int TrainNumber, int NumberOfSeats, int NumberOfCouchette, int NumberOfRSC)
{
	setDestination(Destination);
	setDepartureTime(Hour, Minutes);
	setTrainNumber(TrainNumber);
	setNumberOfSeats(NumberOfSeats);
	setNumberOfCouchette(NumberOfCouchette);
	setNumberOfRSC(NumberOfRSC);
}

Train::~Train()
{
}

void Train::setDestination(std::string Destination)
{
	this->Destination = Destination;
}

void Train::setDepartureTime(int Hour, int Minutes)
{
	if (Hour <= 9 || Hour > 23)
		this->DepartureTime = "0";
	DepartureTime += std::to_string(Hour) + ":";
	if (Minutes <= 9 || Minutes > 59)
		DepartureTime += "0";
	DepartureTime += std::to_string(Minutes);
}

void Train::setTrainNumber(int TrainNumber)
{
	if (TrainNumber < 0)
		TrainNumber = 0;
	this->TrainNumber = TrainNumber;
}

void Train::setNumberOfSeats(int NumberOfSeats)
{
	if (NumberOfSeats < 0)
	{
		NumberOfSeats = 0;
	}
	this->NumberOfSeats = NumberOfSeats;
}

void Train::setNumberOfCouchette(int NumberOfCouchette)
{
	if (NumberOfCouchette < 0)
	{
		NumberOfCouchette = 0;
	}
	this->NumberOfCouchette = NumberOfCouchette;
}

void Train::setNumberOfRSC(int NumberOfRSC)
{
	if (NumberOfRSC < 0)
	{
		NumberOfRSC = 0;
	}
	this->NumberOfRSC = NumberOfRSC;
}

std::string Train::getDestination() const
{
	return Destination;
}

std::string Train::getDepartureTime() const
{
	return DepartureTime;
}

std::string Train::getTrainNumber() const
{
	std::string TN = "";
	if (TrainNumber < 10)
	{
		TN += "0";
	}
	if (TrainNumber < 100 && TrainNumber >= 10)
	{
		TN += "0";
	}
	TN += std::to_string(TrainNumber);
	return TN;
}

int Train::getNumberOfSeats() const
{
	return NumberOfSeats;
}

int Train::getNumberOfCouchette() const
{
	return NumberOfCouchette;
}

int Train::getNumberOfRSC() const
{
	return NumberOfRSC;
}

std::ostream & operator<<(std::ostream & out, const Train & a)
{
	out << "\nDestination: " << a.getDestination()
		<< "\nDepartureTime: " << a.getDepartureTime()
		<< "\nTrainNumber: " << a.getTrainNumber()
		<< "\nNumberOfSeats: " << a.getNumberOfSeats()
		<< "\nNumberOfCouchette: " << a.getNumberOfCouchette()
		<< "\nNumberOfRSC: " << a.getNumberOfRSC()
		<< std::endl;
	return out;
}
