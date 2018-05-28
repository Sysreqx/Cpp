#pragma once
#include "Bird.h"
#include "Lizard.h"
class Dragon:public virtual bird, public virtual Lizard
{
	int fireDistance;
public:
	void setFireDistance(int fireDistance);
	int getFireDistance()const { return fireDistance; }
	void info()const;
	Dragon(std::string color = "black", std::string name = "none", bool hasSkull = 1, bool hasTail = true, int bodylength = 10, bool canfly=true,int fireDistance=1);

	void speak(){
		this->getBodyLength();
		this->getCanfly();
	}
};

