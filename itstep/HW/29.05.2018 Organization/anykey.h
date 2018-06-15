#pragma once

#include "admin.h"


class anykey final
	:public admin {
public:
	anykey(string name, date_ d, bool gender) 
		:admin(name,d,gender,0,0){
	}
	double getCoef()const override {
		return 0.5;
	}
};
