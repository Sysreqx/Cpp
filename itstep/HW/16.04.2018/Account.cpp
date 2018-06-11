#include "Account.h"



Account::Account()
{
}

Account::Account(std::string _id, std::string _name)
{
	id = _id;
	name = _name;
}

Account::Account(std::string _id, std::string _name, int _balance)
{
	balance = _balance;
	id = _id;
	name = _name;
}


Account::~Account()
{
}

std::string Account::getID()
{
	return id;
}

std::string Account::getName()
{
	return name;
}

int Account::getBalance()
{
	return balance;
}

int Account::credit(int _amount)
{
	this->balance += _amount;
	return balance;
}

int Account::debit(int _amount)
{
	if (_amount <= balance)
	{
		balance -= _amount;
	}
	else
	{
		std::cout << "Amount exceeded balance";
	}
	return balance;
}

int Account::transferTo(Account _c, int _amount)
{
	if (_amount <= balance)
	{
		_c.credit(_amount);
		this->debit(_amount);
	}
	else
	{
		std::cout << "Amount exceeded balance";
	}
	return balance;
}

std::string Account::toString()
{
	return "Account[id=" + id + ",name=" + name + ",balance=" + std::to_string(balance) + "]";
}
