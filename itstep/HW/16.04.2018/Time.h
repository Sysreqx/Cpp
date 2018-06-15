#pragma once
#include <iostream>
#include <string>
class Time
{
private:
	int hour, minute, second;
public:
	Time();
	Time(int _hour, int _minute, int _second);
	int getHour();
	int getMinute();
	int getSecond();
	void setHour(int _hour);
	void setMinute(int _minute);
	void setSecond(int _second);
	void setTime(int _hour, int _minute, int _second);
	std::string toString();
	void nextSecond();
	void previousSecond();
	~Time();

};

