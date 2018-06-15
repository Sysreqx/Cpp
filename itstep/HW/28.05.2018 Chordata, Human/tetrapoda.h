#pragma once
#include <string>
#include "Chordata.h"
class tetrapoda:public Chordata
{
	bool hasTail = true;

public:
	void setTail(bool hasTail);
	bool getTail()const;
	void info()const;
	tetrapoda(std::string color, std::string name, bool hasSkull, bool hasTail);
};

