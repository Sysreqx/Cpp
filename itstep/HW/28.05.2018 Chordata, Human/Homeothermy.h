#pragma once
#include "Chordata.h"
//mammals
class Homeothermy :
	public Chordata
{
public:
	Homeothermy(std::string color, std::string name, bool hasSkull, bool hasHomeothermy);
	void move() const;
	void info() const;
	void setHomeothermy(bool hasHomeothermy);
	bool getHasHomeothermy();
private:
	bool hasHomeothermy = true;
};

