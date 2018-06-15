#pragma once
#include <iostream>
#include <string>
#include <vector>
//using namespace std;
class Abiturient
{
private:
	std::string name, surname, patronymic, adress;
	std::vector<int> marks;
	int arithmeticMean;
public:
	//set
	void setMarks(std::vector<int> marks);
	void setName(std::string name);
	void setSurname(std::string surname);
	void setPatronymic(std::string patronymic);
	void setAdress(std::string adress);
	void setArithmeticMean(int arithmeticMean);
	//get
	std::vector<int> getMarks() const;
	std::string getName() const;
	std::string getSurname() const;
	std::string getPatronymic() const;
	std::string getAdress() const;
	int getArithmeticMean() const;
	//перегрузка
	bool operator==(const Abiturient& a) const;
	//Abiturient& operator[](int index) { return arithmeticMean; }
	//constructor
	Abiturient(std::string name, std::string surname, std::string patronymic, std::string adress, std::vector<int> marks, int arithmeticMean = 0);
	//destructor
	~Abiturient();
};
//перегрузка
std::ostream& operator << (std::ostream &out, const Abiturient &a);

