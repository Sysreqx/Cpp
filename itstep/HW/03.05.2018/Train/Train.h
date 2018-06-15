#pragma once
#include <iostream>
#include <string>
#include <vector>

class Train
{/*
	.Train: Пункт назначения, Номер поезда, Время отправления, Число общих мест, Купейных, Плацкартных.
		Создать массив объектов.Вывести :
		a) список поездов, следующих до заданного пункта назначения;
		b) список поездов, следующих до заданного пункта назначения и отправляющихся после заданного часа;
		c) список поездов, отправляющихся до заданного пункта назначения и имеющих общие места.*/
private:
	std::string Destination, DepartureTime;
	int TrainNumber, NumberOfSeats, NumberOfCouchette, NumberOfRSC;
public:
	//set
	void setDestination(std::string Destination = "Final Destination");
	void setDepartureTime(int Hour, int Minutes);
	void setTrainNumber(int TrainNumber = 228);
	void setNumberOfSeats(int NumberOfSeats = 4);
	void setNumberOfCouchette(int NumberOfCouchette = 4);
	void setNumberOfRSC(int NumberOfRSC = 4);
	//get
	std::string getDestination() const;
	std::string getDepartureTime() const;
	std::string getTrainNumber() const;
	int getNumberOfSeats() const;
	int getNumberOfCouchette() const;
	int getNumberOfRSC() const;

	//constructor
	Train(std::string Destination, int Hour, int Minutes, int TrainNumber, int NumberOfSeats, int NumberOfCouchette, int NumberOfRSC);
	~Train();
};

std::ostream &operator<<(std::ostream &out, const Train &a);
