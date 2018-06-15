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
	organization itstep("Академия Шаг", 100000);

	/*
	itstep.addEmployee(new admin("Вася", date_(5, 8, 1996), 1, 2, 3));
	itstep.addEmployee(new saler("Катя", date_(1, 1, 1990), 0, 3, 300));
	itstep.addEmployee(new anykey("Леха"));
	itstep.deleteEmployee(3);
	itstep.getInfo();
	itstep.changeEmployeeExp(2, 10);
	itstep.changeEmployeeGender(2, false);
	itstep.changeEmployeeName(2, "Махрипуш");
	itstep.changeEmployeeTBD(2, 2, 2, 2030);
	itstep.getInfo();*/
	Interface(itstep);

	system("pause");
}

void Interface(organization& itstep)
{
	cout << "Выберите действие: " << endl;
	cout << "\t1. Добавить админа" << endl;
	cout << "\t2. Добавить разработчика" << endl;
	cout << "\t3. Добавить продавца" << endl;
	cout << "\t4. Добавить аникейшика" << endl;
	cout << "\t5. Удалить работника" << endl;
	cout << "\t6. Получить информацию по организации" << endl;
	cout << "\t7.  Сколько должна выплатить организация" << endl;
	cout << "\t8.  Изменить опыт работы работника" << endl;
	cout << "\t9.  Изменить пол работника" << endl;
	cout << "\t10. Изменить имя работника" << endl;
	cout << "\t11. Изменить дату рождения работника" << endl;
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
	cout << "Введите имя администарота" << endl;
	string name;
	cin >> name;
	cout << "Введите дату рождения через пробел, начинается со дня" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	cout << "Введите пол, true - мужской, false - женский" << endl;
	bool gender;
	cin >> gender;
	cout << "Введите опыт работы" << endl;
	int exp;
	cin >> exp;
	cout << "Введите количество обслуживаемых ПК" << endl;
	int pc;
	cin >> pc;
	itstep.addEmployee(new admin(name, date_(day, month, year), gender, exp, pc));
	system("cls");
	Interface(itstep);
}

void addDeveloper(organization& itstep)
{
	system("cls");
	cout << "Введите имя разработчика" << endl;
	string name;
	cin >> name;
	cout << "Введите дату рождения через пробел, начинается со дня" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	cout << "Введите пол, true - мужской, false - женский" << endl;
	bool gender;
	cin >> gender;
	cout << "Введите опыт работы" << endl;
	int exp;
	cin >> exp;
	cout << "Знание языков(количество)" << endl;
	int lc;
	cin >> lc;
	itstep.addEmployee(new developer(name, date_(day, month, year), gender, exp, lc));
	system("cls");
	Interface(itstep);
}

void addSaler(organization& itstep)
{
	system("cls");
	cout << "Введите имя продавца" << endl;
	string name;
	cin >> name;
	cout << "Введите дату рождения через пробел, начинается со дня" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	cout << "Введите пол, true - мужской, false - женский" << endl;
	bool gender;
	cin >> gender;
	cout << "Введите опыт работы" << endl;
	int exp;
	cin >> exp;
	cout << "Введите количество продаж" << endl;
	int cs;
	cin >> cs;
	itstep.addEmployee(new saler(name, date_(day, month, year), gender, exp, cs));
	system("cls");
	Interface(itstep);
}

void addAnykey(organization& itstep)
{
	system("cls");
	cout << "Введите имя аникейшика" << endl;
	string name;
	cin >> name;
	cout << "Введите дату рождения через пробел, начинается со дня" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	cout << "Введите пол, true - мужской, false - женский" << endl;
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
	cout << "Введите позицию" << endl;
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
	cout << "Введите позицию" << endl;
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
	cout << "Введите позицию" << endl;
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
	cout << "Введите позицию" << endl;
	int position;
	cin >> position;
	cout << "Введите имя" << endl;
	string name;
	cin >> name;
	itstep.changeEmployeeName(position, name);
	system("cls");
	Interface(itstep);
}

void chngEmployeTBD(organization& itstep) {
	system("cls");
	cout << "Введите позицию" << endl;
	int position;
	cin >> position;
	cout << "Введите дату рождения" << endl;
	int day, month, year;
	cin >> day >> month >> year;
	itstep.changeEmployeeTBD(position, day, month, year);
	system("cls");
	Interface(itstep);
}