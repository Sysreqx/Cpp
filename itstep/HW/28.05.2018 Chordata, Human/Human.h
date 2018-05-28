#pragma once
#include "Homeothermy.h"
class Human :
	public Homeothermy
{
public:
	Human(std::string color, std::string name, bool hasSkull, bool hasHomeothermy, bool Reason);
	void move() const;
	void info() const;
	bool hasReason() const;
	void setReason(bool Reason);
private:
	// Разум
	bool Reason = true;
};

