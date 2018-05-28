#include "Dragon.h"
using namespace std;


void Dragon::setFireDistance(int fireDistance)
{
	this->fireDistance = fireDistance;
}

void Dragon::info() const
{
   tetrapoda::info();
   cout << " can fly: " << getCanfly() << std::endl;
   cout << " Body length: " << getBodyLength() << endl;
   cout << "Fire Distance: " <<fireDistance<< endl;
}

Dragon::Dragon(std::string eyesColor, std::string name, bool hasSkull, bool hasTail, int bodylength, bool canfly, int fireDistance):Lizard(eyesColor, name, hasSkull, hasTail,bodylength),bird(eyesColor, name, hasSkull, hasTail,canfly),tetrapoda(eyesColor, name, hasSkull, hasTail)
{
	setName(name);
	setEyescolor(eyesColor);
	setTail(hasTail);
	this->fireDistance = fireDistance;
}
