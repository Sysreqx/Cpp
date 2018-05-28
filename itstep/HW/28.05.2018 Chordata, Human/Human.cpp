#include "Human.h"


Human::Human(std::string color, std::string name, bool hasSkull, bool hasHomeothermy, bool Reason) : Homeothermy(color, name, hasSkull, hasHomeothermy)
{
	setReason(Reason);
}

void Human::move() const
{
	std::cout << "Левой тудой, правой сюдой";
}

void Human::info() const
{
	Homeothermy::info();
	std::cout << "Reason: " << Reason << std::endl;
}

bool Human::hasReason() const
{
	return Reason;
}

void Human::setReason(bool Reason)
{
	this->Reason = Reason;
}
