#pragma once
#include <iostream>
#include <string>
#include <vector>

class AirAstana
{/*
	3. AirAstana: Пункт назначения, Номер рейса, Тип самолета, Время вылета, Дни недели.
		Создать массив объектов.Вывести :
		a) список рейсов для заданного пункта назначения;
		b) список рейсов для заданного дня недели;
		c) список рейсов для заданного дня недели, время вылета для которых больше заданного.*/
private:
	int	Hour, Minutes, FlightNumber;
	std::string Destination, TypeOfAircraft, DepartureTime, DaysOfTheWeek;
public:
	//get
	std::string getDestination() const;
	std::string getTypeOfAircraft() const;
	std::string getDepartureTime() const;
	std::string getDepartureTime();
	std::string getDaysOfTheWeek() const;
	int getFlightNumber() const;
	//set
	void setDestination(std::string Destination = "Final Destination");
	void setTypeOfAircraft(std::string TypeOfAircraft = "Passenger");
	void setDepartureTime(int Hour = 0, int Minutes = 0);
	void setDaysOfTheWeek(std::string DaysOfTheWeek);
	void setFlightNumber(int FlightNumber);
	//конструктор
	AirAstana(std::string Destination, std::string TypeOfAircraft, int Hour, int Minutes, std::string DaysOfTheWeek, int FlightNumber);
	~AirAstana();
};
std::ostream &operator<<(std::ostream &out, const AirAstana &a);