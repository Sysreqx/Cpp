#include <iostream>
#include <fstream>
#include <iterator>
#include "Student.h"
vector<int> rMarks();

int main()
{
	Student s1("Carlos", "Castaneda", 93, 0, rMarks());
	Student s2("Juan", "Matus", 153, 1, rMarks());
	Student s3("Genaro", "Flores", 153, 2, rMarks());
	Student s4("Taisha", "Abelar", 74, 3, rMarks());
	vector<Student> s = { s1, s2, s3, s4 };/*
	for (auto i : s)
		cout << i << endl;*/


	ofstream fout("StudentsDB.txt");
	//ostream_iterator<Student> out(fout);
	copy(s.begin(), s.end(), ostream_iterator<Student>(fout, "\n"));

	fout.close();

	system("pause");
	return 0;
}

vector<int> rMarks()
{
	vector<int> v;
	for (int i = 0; i < 12; i++)
		v.push_back(rand() % 3 + 10);
	return v;
}
