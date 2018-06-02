#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "admin.h"
#include "developer.h"
#include "saler.h"
#include "organization.h"
#include "anykey.h"
using namespace std;

void Interface(organization& itstep);
void addAdmin(organization& itstep);
void addDeveloper(organization& itstep);
void addSaler(organization& itstep);
void addAnykey(organization& itstep);
void getInfoo(organization& itstep);
void deleteEmployeeG(organization & itstep);
void howMuchMoney(organization & itstep);

void chngEmployeExp(organization& itstep);
void chngEmployeGender(organization& itstep);
void chngEmployeName(organization& itstep);
void chngEmployeTBD(organization& itstep);


int main()
{
	setlocale(0, "");
	organization itstep("�������� ���", 100000);

	/*
	itstep.addEmployee(new admin("����", date_(5, 8, 1996), 1, 2, 3));
	itstep.addEmployee(new saler("����", date_(1, 1, 1990), 0, 3, 300));
	itstep.addEmployee(new anykey("����"));
	itstep.deleteEmployee(3);
	itstep.getInfo();
	itstep.changeEmployeeExp(2, 10);
	itstep.changeEmployeeGender(2, false);
	itstep.changeEmployeeName(2, "��������");
	itstep.changeEmployeeTBD(2, 2, 2, 2030);
	itstep.getInfo();*/
	Interface(itstep);

	system("pause");
}

void Interface(organization& itstep)
{
	cout << "�������� ��������: " << endl;
	cout << "\t1. �������� ������" << endl;
	cout << "\t2. �������� ������������" << endl;
	cout << "\t3. �������� ��������" << endl;
	cout << "\t4. �������� ����������" << endl;
	cout << "\t5. ������� ���������" << endl;
	cout << "\t6. �������� ���������� �� �����������" << endl;
	cout << "\t7.  ������� ������ ��������� �����������" << endl;
	cout << "\t8.  �������� ���� ������ ���������" << endl;
	cout << "\t9.  �������� ��� ���������" << endl;
	cout << "\t10. �������� ��� ���������" << endl;
	cout << "\t11. �������� ���� �������� ���������" << endl;
	int choise = 0;
	cin >> choise;
	if (choise == 1)
		addAdmin(itstep);
	if (choise == 2)
		addDeveloper(itstep);
	if (choise == 3)
		addSaler(itstep);
	if (choise == 4)
		addAnykey(itstep);
	if (choise == 5)
		deleteEmployeeG(itstep);
	if (choise == 6)
		getInfoo(itstep);
	if (choise == 7)
		howMuchMoney(itstep);
	if (choise == 8)
		chngEmployeExp(itstep);
	if (choise == 9)
		chngEmployeGender(itstep);
	if (choise == 10)
		chngEmployeName(itstep);
	if (choise == 11)
		chngEmployeTBD(itstep);

}

void addAdmin(organization& itstep)
{
	system("cls");
	cout << "������� ��� �������������" << endl;
	string name;
	cin >> name;
	cout << "������� ���� �������� ����� ������, ���������� �� ���" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	cout << "������� ���, true - �������, false - �������" << endl;
	bool gender;
	cin >> gender;
	cout << "������� ���� ������" << endl;
	int exp;
	cin >> exp;
	cout << "������� ���������� ������������� ��" << endl;
	int pc;
	cin >> pc;
	itstep.addEmployee(new admin(name, date_(day, month, year), gender, exp, pc));
	system("cls");
	Interface(itstep);
}

void addDeveloper(organization& itstep)
{
	system("cls");
	cout << "������� ��� ������������" << endl;
	string name;
	cin >> name;
	cout << "������� ���� �������� ����� ������, ���������� �� ���" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	cout << "������� ���, true - �������, false - �������" << endl;
	bool gender;
	cin >> gender;
	cout << "������� ���� ������" << endl;
	int exp;
	cin >> exp;
	cout << "������ ������(����������)" << endl;
	int lc;
	cin >> lc;
	itstep.addEmployee(new developer(name, date_(day, month, year), gender, exp, lc));
	system("cls");
	Interface(itstep);
}

void addSaler(organization& itstep)
{
	system("cls");
	cout << "������� ��� ��������" << endl;
	string name;
	cin >> name;
	cout << "������� ���� �������� ����� ������, ���������� �� ���" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	cout << "������� ���, true - �������, false - �������" << endl;
	bool gender;
	cin >> gender;
	cout << "������� ���� ������" << endl;
	int exp;
	cin >> exp;
	cout << "������� ���������� ������" << endl;
	int cs;
	cin >> cs;
	itstep.addEmployee(new saler(name, date_(day, month, year), gender, exp, cs));
	system("cls");
	Interface(itstep);
}

void addAnykey(organization& itstep)
{
	system("cls");
	cout << "������� ��� ����������" << endl;
	string name;
	cin >> name;
	cout << "������� ���� �������� ����� ������, ���������� �� ���" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	cout << "������� ���, true - �������, false - �������" << endl;
	bool gender;
	cin >> gender;
	itstep.addEmployee(new anykey(name, date_(day, month, year), gender));
	system("cls");
	Interface(itstep);
}

void getInfoo(organization & itstep)
{
	itstep.getInfo();
	Interface(itstep);
}

void deleteEmployeeG(organization & itstep)
{
	system("cls");
	cout << "������� �������" << endl;
	int position;
	cin >> position;
	itstep.deleteEmployee(position);
	system("cls");
	Interface(itstep);
}

void howMuchMoney(organization & itstep)
{
	system("cls");
	std::cout << itstep.allSalary() << endl;
	Interface(itstep);
}

void chngEmployeExp(organization& itstep) {
	system("cls");
	cout << "������� �������" << endl;
	int position;
	cin >> position;
	int exp;
	cin >> exp;
	itstep.changeEmployeeExp(position, exp);
	system("cls");
	Interface(itstep);
}

void chngEmployeGender(organization& itstep) {
	system("cls");
	cout << "������� �������" << endl;
	int position;
	cin >> position;
	bool gender;
	cin >> gender;
	itstep.changeEmployeeGender(position, gender);
	system("cls");
	Interface(itstep);
}

void chngEmployeName(organization& itstep) {
	system("cls");
	cout << "������� �������" << endl;
	int position;
	cin >> position;
	cout << "������� ���" << endl;
	string name;
	cin >> name;
	itstep.changeEmployeeName(position, name);
	system("cls");
	Interface(itstep);
}

void chngEmployeTBD(organization& itstep) {
	system("cls");
	cout << "������� �������" << endl;
	int position;
	cin >> position;
	cout << "������� ���� ��������" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	itstep.changeEmployeeTBD(position, day, month, year);
	system("cls");
	Interface(itstep);
}