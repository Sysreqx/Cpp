#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

class Student
{
private:
	string name;
	string surname;
	int age;
	int id;
	vector<int> marks;
public:
	Student(string name = "Name", string surname = "Surname", int age = 18, int id = 0, vector<int> marks = vector<int>());

	void setName(string name);
	void setSurname(string surname);
	void setAge(int age);
	void setId(int id);
	void setMarks(vector<int> marks);

	string getName() const;
	string getSurname() const;
	int getAge() const;
	int getId() const;
	vector<int> getMarks() const;

	void addMark(int mark);
	void deleteLastMark();
	int getAvgMark();

	friend std::ostream& operator<<(std::ostream &out, const Student &obj);
};

std::ostream& operator<<(std::ostream &out, const Student &obj);