#pragma once
#include <iostream>
#include <string>

class Account
{
private:
	std::string id;
	std::string name;
	int balance = 0;
public:
	Account();
	Account(std::string _id, std::string _name);
	Account(std::string _id, std::string _name, int _balance);
	~Account();

	std::string getID();
	std::string getName();
	int getBalance();
	int credit(int _amount);
	int debit(int _amount);
	int transferTo(Account _c, int _amount);
	std::string toString();
};

