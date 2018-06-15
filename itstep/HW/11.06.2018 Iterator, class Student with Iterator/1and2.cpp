//Записать массив вещественных  чисел в файл, используя итератор вывода, в качестве разделителя использовать табуляцию
//Прочитать массив вещественных  чисел из файла, используя итератор ввода
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
	srand(time(0));
	// <Random>
	double lower_bound = 0;
	double upper_bound = 10;
	std::uniform_real_distribution<double> unif(lower_bound, upper_bound);
	std::default_random_engine re;
	double a_random_double = unif(re);
	// </Random>

	vector<double> v;
	for (int i = 0; i < 7; i++)
	{/*
		string s;
		s.push_back(rand() % 10);
		s += ".";
		s.push_back(rand() % 10);
		double d = stod(s);*/
		v.push_back(unif(re));
	}
	ofstream fout("q.txt");
	ostream_iterator<double> out(fout);
	copy(v.begin(), v.end(), ostream_iterator<double> (fout, "\t"));

	//2

	//ifstream fin("q.txt");
	//copy(istream_iterator<double>(fin), istream_iterator<double>(),
	//	back_inserter(v));
	//for (auto i : v)
	//	cout << i << " ";
	//cout << endl;

	//fin.close();
	fout.close();

	system("pause");
	return 0;
}