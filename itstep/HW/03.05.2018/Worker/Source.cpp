#include "Worker.h"
#include <ctime>

std::string rName();
std::string rInitials();
std::string rPosition();
int rYear();
int rSalary();

int main()
{
	srand(time(0));
	Worker w1(rName(), rPosition(), rYear(), rSalary());
	Worker w2(rName(), rPosition(), rYear(), rSalary());
	Worker w3(rName(), rPosition(), rYear(), rSalary());
	Worker w4(rName(), rPosition(), rYear(), rSalary());
	Worker w5(rName(), rPosition(), rYear(), rSalary());
	Worker w6(rName(), rPosition(), rYear(), rSalary());
	Worker w7(rName(), rPosition(), rYear(), rSalary());
	Worker w8(rName(), rPosition(), rYear(), rSalary());
	Worker w9(rName(), rPosition(), rYear(), rSalary());
	std::vector<Worker> w = {w1, w2, w3, w4, w5, w6, w7, w8, w9};
	//список работников, стаж работы которых на данном предприятии превосходит заданное число лет;
	//randomnoe chislo
	int rY = rYear() - 1950;
	std::cout << std::to_string(rY) << ": \n";
	for (int i = 0; i < w.size(); i++)
	{
		if (2018 - w[i].getYear() > rY)
			std::cout << "\t" << w[i].getName() << " " << w[i].getYear() << std::endl;
	}
	//список работников, зарплата которых превосходит заданную;
	int rS = rSalary();
	std::cout << std::to_string(rS) << ": \n";
	for (int i = 0; i < w.size(); i++)
	{
		if (w[i].getSalary() > rS)
			std::cout << "\t" << w[i].getName() << " " << w[i].getSalary() << std::endl;
	}
	//список работников, занимающих заданную должность.* /
	std::string Post = rPosition();
	std::cout << Post << ": \n";
	for (int i = 0; i < w.size(); i++)
	{
		if (w[i].getPosition() == Post)
			std::cout << "\t" << w[i].getName() << " " << w[i].getPosition() << std::endl;
	}
	system("pause");
	return 0;
}

std::string rName()
{
	int n = rand() % 14;
	std::string Name;
	if (n == 1) Name = "Gavriil" + rInitials();
	if (n == 2) Name = "Louka" + rInitials();
	if (n == 3) Name = "Timofey" + rInitials();
	if (n == 4) Name = "Sousanna" + rInitials();
	if (n == 5) Name = "Semen" + rInitials();
	if (n == 6) Name = "Raisa" + rInitials();
	if (n == 7) Name = "Raisavan" + rInitials();
	if (n == 8) Name = "Ignat" + rInitials();
	if (n == 9) Name = "Igor" + rInitials();
	if (n == 10) Name = "Ilya" + rInitials();
	if (n == 11) Name = "Iosif" + rInitials();
	if (n == 12) Name = "Julia" + rInitials();
	if (n == 13) Name = "Khristina" + rInitials();
	if (n == 0) Name = "Uliana" + rInitials();
	return Name;
}

std::string rInitials()
{
	int n = rand() % 14;
	std::string Name;
	if (n == 0) Name = " A.V.";
	if (n == 1) Name = " O.U.";
	if (n == 2) Name = " I.M.";
	if (n == 3) Name = " O.U.";
	if (n == 4) Name = " E.M.";
	if (n == 5) Name = " A.I.";
	if (n == 6) Name = " A.I.";
	if (n == 7) Name = " G.N.";
	if (n == 8) Name = " G.O.";
	if (n == 9) Name = " I.L.";
	if (n == 10) Name = " I.O.";
	if (n == 11) Name = " J.U.";
	if (n == 12) Name = " K.H.";
	if (n == 13) Name = " U.L.";
	return Name;
}

std::string rPosition()
{
	int p;
	std::string Position;
	p = rand() % 10;
	if (p == 0) Position = "Chief Executive";
	if (p == 1) Position = "Director General";
	if (p == 2) Position = "Chairman";
	if (p == 3) Position = "Chief Accountant";
	if (p == 4) Position = "Deputy Director";
	if (p == 5) Position = "Head of Department";
	if (p == 6) Position = "Senior Manager";
	if (p == 7) Position = "Plankton";
	if (p == 8) Position = "Assistant Plankton";
	if (p == 9) Position = "Assistant Assistant Plankton";
	return Position;
}

int rYear()
{
	int Y = (rand() % 68) + 1951;
	return Y;
}

int rSalary()
{
	int S = (rand() % 900000) + 100000;
	return S;
}
