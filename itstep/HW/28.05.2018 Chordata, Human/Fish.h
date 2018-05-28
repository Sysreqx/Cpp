#pragma once
#include "Chordata.h"
class Fish :
	public Chordata
{
public:
	Fish(std::string color, std::string name, bool hasSkull, bool isOsteichthyes);
	void setFishType(bool isOsteichthyes);
	std::string getFishType() const;
	void move() const;
	void info() const;
private:
	// �������
	bool isOsteichthyes = true;
	// ��������
	bool isChondrichthyes = false;
};

