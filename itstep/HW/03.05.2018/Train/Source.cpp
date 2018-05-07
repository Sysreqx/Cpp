#include "Train.h"
#include <ctime>

std::string randCity();
int randFlightNum();
int randHour();
int randMin();
std::string HToStr(int h);
int randSeats();

int main()
{
	srand(time(0));
	Train t1(randCity(), randHour(), randMin(), randFlightNum(), randSeats(), randSeats(), randSeats());
	Train t2(randCity(), randHour(), randMin(), randFlightNum(), randSeats(), randSeats(), randSeats());
	Train t3(randCity(), randHour(), randMin(), randFlightNum(), randSeats(), randSeats(), randSeats());
	Train t4(randCity(), randHour(), randMin(), randFlightNum(), randSeats(), randSeats(), randSeats());
	Train t5(randCity(), randHour(), randMin(), randFlightNum(), randSeats(), randSeats(), randSeats());
	Train t6(randCity(), randHour(), randMin(), randFlightNum(), randSeats(), randSeats(), randSeats());
	Train t7(randCity(), randHour(), randMin(), randFlightNum(), randSeats(), randSeats(), randSeats());
	Train t8(randCity(), randHour(), randMin(), randFlightNum(), randSeats(), randSeats(), randSeats());
	Train t9(randCity(), randHour(), randMin(), randFlightNum(), randSeats(), randSeats(), randSeats());
	std::vector<Train> t{ t1, t2, t3, t4, t5, t6, t7, t8, t9 };

	//a) список поездов, следующих до заданного пункта назначения;
	std::string des = randCity();
	std::cout << des << ": \n";
	for (int i = 0; i < t.size(); i++)
	{
		if (t[i].getDestination() == des)
		{
			std::cout << t[i].getTrainNumber() << std::endl;
		}
	}
	std::cout << "\n-----------------------\n";
	//b) список поездов, следующих до заданного пункта назначения и отправляющихся после заданного часа;
	des = randCity();
	int h = randHour();
	std::cout << des << " , hour more than " << h << ": \n";
	for (int i = 0; i < t.size(); i++)
	{
		if (t[i].getDestination() == des && t[i].getDepartureTime() > HToStr(h))
		{
			std::cout << t[i].getTrainNumber() << std::endl;
		}
	}
	std::cout << "\n-----------------------\n";
	//c) список поездов, отправляющихся до заданного пункта назначения и имеющих общие места.
	des = randCity();
	std::cout << des << " , Have General Seats " << ": \n";
	for (int i = 0; i < t.size(); i++)
	{
		if (t[i].getDestination() == des && t[i].getNumberOfSeats() > 0)
		{
			std::cout << t[i].getTrainNumber() << std::endl;
		}
	}
	std::cout << "\n-----------------------\n";

	system("pause");
	return 0;
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

int randSeats()
{
	int s = rand() % 197 + 4;
	return s;
}
