#include "Abiturient.h"
#include <algorithm> 
#include <ctime>
/*
2.Abiturient: Фамилия, Имя, Отчество, Адрес, Оценки.
Создать массив объектов. Вывести:
a) список абитуриентов, имеющих неудовлетворительные оценки;
b) список абитуриентов, средний балл у которых выше заданного;
c) выбрать заданное число N абитуриентов, имеющих самый высокий средний балл (вывести также полный список абитуриентов, имеющих полупроходной балл).
*/

int main()
{
	srand(time(0));
	//Массив оценок
	std::vector<int> m1, m2, m3, m4, m5, m6, m7, m8, m9;
	for (int i = 0; i < 10; i++)
	{
		m1.push_back(rand() % 12 + 1);
		m2.push_back(rand() % 12 + 1);
		m3.push_back(rand() % 12 + 1);
		m4.push_back(rand() % 12 + 1);
		m5.push_back(rand() % 12 + 1);
		m6.push_back(rand() % 12 + 1);
		m7.push_back(rand() % 12 + 1);
		m8.push_back(rand() % 12 + 1);
		m9.push_back(rand() % 12 + 1);
	}
	//Объекты класса Абитуриет, как делать не руками не знаю
	Abiturient a1("Karlos", "Kastaneda", "Nagual", "Ixtlan", m1);
	Abiturient a2("Henaro", "Grau", "Nagual", "Sonora", m2);
	Abiturient a3("Emma", "Michael", "Joshua", "LA", m3);
	Abiturient a4("Olivi", "Matthew", "Ethan", "NY", m4);
	Abiturient a5("Anthony", "Elizabet", "Alexi", "CA", m5);
	Abiturient a6("Nicholas", "Sara", "Grac", "NY", m6);
	Abiturient a7("Alexander", "Alyss", "Sophi", "Morrowind", m7);
	Abiturient a8("James", "Laure", "Briann", "Fortress Sean's", m8);
	Abiturient a9("Juan", "Matus", "Nagual", "Sonora", m9);
	//Массив абитуриентов
	std::vector<Abiturient> Abit = { a1, a2, a3, a4, a5, a6, a7, a8, a9 };
	//Среднее арифметическое
	double aM = 0;
	/*
	std::cout << Abit[0].getMarks().size() << std::endl;
	std::cout << Abit.size() << std::endl;
	std::cout << Abit[0].getName() << std::endl;*/

	//Неуд
	std::cout << "Loosers \n 5\n";
	for (int i = 0; i < Abit.size(); i++)
	{
		//Среднее арифметическое
		aM = 0;
		for (int j = 0; j < Abit[i].getMarks().size(); j++)
		{
			aM += Abit[i].getMarks()[j];
		}
		aM /= Abit[i].getMarks().size();
		if (aM < 5)
		{
			std::cout << "Bad " << Abit[i].getName() << " " << Abit[i].getSurname() << std::endl;
		}
	}

	//Выше заданной оценки
	std::cout << std::endl << "------------------------\nAverages" << std::endl;
	//Заданная оценка
	int Av = 9;
	std::cin >> Av;
	for (int i = 0; i < Abit.size(); i++)
	{
		aM = 0;
		for (int j = 0; j < Abit[i].getMarks().size(); j++)
		{
			aM += Abit[i].getMarks()[j];
		}
		aM /= Abit[i].getMarks().size();
		if (aM > Av)
		{
			std::cout << "Average " << Abit[i].getName() << " " << Abit[i].getSurname() << std::endl;
		}
	}

	//Топ студентов
	std::cout << std::endl << "------------------------\nMarks Table" << std::endl;

	// sort stack overflow
	std::sort(Abit.begin(), Abit.end(), [](const Abiturient& a, const Abiturient& b) {
		return a.getArithmeticMean() > b.getArithmeticMean();
	});
	
	//sort
	for (auto i : Abit)
		std::cout << i;

	system("pause");
	return 0;
}