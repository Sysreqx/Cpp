#include "Lizard.h"
using namespace std;




void Lizard::setBodyLength(int bodylength)
{
	this->bodylength = bodylength;
}

int Lizard::getBodyLength() const
{
	return bodylength;
}


void Lizard::info()const
{
	tetrapoda::info();
	cout << " Body length: " << bodylength << endl;
}

Lizard::Lizard(std::string eyesColor, std::string name, bool hasSkull, bool hasTail, int bodylength):tetrapoda(eyesColor, name, hasSkull, hasTail)
{
	this->bodylength = bodylength;
}


