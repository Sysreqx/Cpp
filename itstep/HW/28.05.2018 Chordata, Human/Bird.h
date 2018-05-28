#pragma once
#include "tetrapoda.h"
class bird :public virtual tetrapoda
{
	
	bool canfly = true;
public:
	void setCanfly(bool canfly);
	bool getCanfly()const;
	void info()const;
	bird(std::string color, std::string name, bool hasSkull, bool hasTail,bool canfly );

	void speak() { std::cout << "kar"; }

};
