#pragma once
#include "employee.h"
#include <vector>
#include <string>
#include <memory>
using namespace std;/*
Добавить возможноть увольнения работников, подсчет потребности в зарплате, изменение информации по работнику, Нарисовать интерфейс*/

class organization {
public:
	vector<auto_ptr<employee>> getEmployeeI() {
		return emps;
	}
	void setSalary(double salary);
	void setName(std::string name);

	organization(string name, double salary) {
		this->name = name;
		this->salary = salary;
	}
	void addEmployee(employee* emp) {
		emps.push_back(auto_ptr<employee>(emp));
	}
	void deleteEmployee(int position) {
		if (position < emps.size())
			emps.erase(emps.begin() + position);
	}
	void changeEmployeeTBD(int position, int day, int month, int year) {
		if (position < emps.size())
			emps[position]->setBdate(day, month, year);
	}
	void changeEmployeeExp(int position, int exp) {
		if (position < emps.size())
			emps[position]->setExp(exp);
	}
	void changeEmployeeName(int position, string name) {
		if (position < emps.size())
			emps[position]->setName(name);
	}
	void changeEmployeeGender(int position, bool gender) {
		if (position < emps.size())
			emps[position]->setGender(gender);
	}
	// Потребность в зарплате.
	double allSalary() const {
		double c = 0.0;
		for (int i = 0; i < emps.size(); i++)
		{
			c += emps[i]->getCoef() * salary;
		}
		return c;
	}
	void getInfo()const {
		cout << "Наименование организации: " << name << "\n----------\n";
		for (size_t i = 0; i < emps.size(); i++)
		{
			string res = typeid(*emps[i]).name();
			cout << res.substr(6) << endl;
			emps[i]->info();
			cout << "\nзарплата:" << emps[i]->getCoef()*salary
				<< " тенге\n------\n";
		}
	}

private:
	double salary;
	string name;
	vector<auto_ptr<employee>> emps;
};