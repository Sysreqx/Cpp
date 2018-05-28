#pragma once
#include <string>
class Eye
{
	std::string color;
public:
	void setColor(std::string color);
	std::string getColor() const;
	Eye(std::string col = "black");
};

