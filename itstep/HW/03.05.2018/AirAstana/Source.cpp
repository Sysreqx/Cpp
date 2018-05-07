#include "AirAstana.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib> //atoi

//случайный день
std::string randDay();
//город
std::string randCity();
//Тип рейса
std::string randTypeOfAircraft();
//номер рейса
int randFlightNum();
//Час
int randHour();
//Минута
int randMin();
//инт в стринг
std::string HToStr(int h);


int main()
{
	srand(time(0));
	AirAstana a1(randCity(), randTypeOfAircraft(), randHour(), randMin(), randDay(), randFlightNum());
	AirAstana a2(randCity(), randTypeOfAircraft(), randHour(), randMin(), randDay(), randFlightNum());
	AirAstana a3(randCity(), randTypeOfAircraft(), randHour(), randMin(), randDay(), randFlightNum());
	AirAstana a4(randCity(), randTypeOfAircraft(), randHour(), randMin(), randDay(), randFlightNum());
	AirAstana a5(randCity(), randTypeOfAircraft(), randHour(), randMin(), randDay(), randFlightNum());
	AirAstana a6(randCity(), randTypeOfAircraft(), randHour(), randMin(), randDay(), randFlightNum());
	AirAstana a7(randCity(), randTypeOfAircraft(), randHour(), randMin(), randDay(), randFlightNum());
	AirAstana a8(randCity(), randTypeOfAircraft(), randHour(), randMin(), randDay(), randFlightNum());
	AirAstana a9(randCity(), randTypeOfAircraft(), randHour(), randMin(), randDay(), randFlightNum());
	AirAstana a10(randCity(), randTypeOfAircraft(), randHour(), randMin(), randDay(), randFlightNum());
	std::vector<AirAstana> AA = { a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 };

	//список рейсов для заданного пункта назначения;
	std::string des;
	des = randCity();
	std::cout << des << ": ";
	for (int i = 0; i < AA.size(); i++)
	{
		if (AA[i].getDestination() == des)
			std::cout << AA[i].getFlightNumber() << ". ";
	}
	std::cout << "\n-----------------------\n";

	//список рейсов для заданного дня недели;
	std::string week;
	week = randDay();
	std::cout << week << ": ";
	for (int i = 0; i < AA.size(); i++)
	{
		if (AA[i].getDaysOfTheWeek() == week)
			std::cout << AA[i].getFlightNumber() << ". ";
	}
	std::cout << "\n-----------------------\n";

	//список рейсов для заданного дня недели, время вылета для которых больше заданного.
	int h = randHour();
	week = randDay();
	std::cout << week << " , hour more than " << h << ": ";
	//hh:mm
	int strH = 0, strM = 0;
	for (int i = 0; i < AA.size(); i++)
	{/*
	 strH = atoi(AA[i].getDepartureTime().substr(0, 2));
	 strM = atoi(AA[i].getDepartureTime().substr(3, 2));*/
		if (AA[i].getDaysOfTheWeek() == week && AA[i].getDepartureTime() > HToStr(h))
			std::cout << AA[i].getFlightNumber() << ". ";
	}
	std::cout << "\n-----------------------\n";

	system("pause");
	return 0;
}

std::string randDay()
{
	int d;
	std::string day;
	d = rand() % 7;
	if (d == 0)
		day = "Monday";
	if (d == 1)
		day = "Tuesday";
	if (d == 2)
		day = "Wednesday";
	if (d == 3)
		day = "Thursday";
	if (d == 4)
		day = "Friday";
	if (d == 5)
		day = "Saturday";
	if (d == 6)
		day = "Sunday";
	return day;
}

std::string randCity()
{
	int c;
	std::string city;
	c = rand() % 3;
	if (c == 0)
		city = "Almaty";
	if (c == 1)
		city = "Astana";
	if (c == 2)
		city = "Taraz";
	return city;
}

std::string randTypeOfAircraft()
{
	int t;
	std::string type;
	t = rand() % 3;
	if (t == 0)
		type = "Bagage";
	if (t == 1)
		type = "Cargo";
	if (t == 2)
		type = "Passenger";
	return type;
}

int randFlightNum()
{
	int n;
	n = rand() % 900 + 100;
	return n;
}

int randHour()
{
	int n;
	n = rand() % 24;
	return n;
}

int randMin()
{
	int n;
	n = rand() % 60;
	return n;
}

std::string HToStr(int h)
{
	std::string DepTime;
	if (h <= 9 || h > 23)
		DepTime = "0";
	DepTime += std::to_string(h) + ":00";
	return DepTime;
}
