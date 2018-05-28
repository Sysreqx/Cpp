#pragma once
#include"tetrapoda.h"
class Lizard: public virtual tetrapoda
{
	int bodylength;
public:
	
	void setBodyLength(int bodylength);
	int getBodyLength()const;
	void info()const;
	Lizard(std::string color, std::string name, bool hasSkull, bool hasTail, int bodylength);

	void speak() { std::cout << "11"; }
};

