#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
using namespace std;

class townsGame {
	map<string, int> towns;
	char nextWord = '.';
	string dir;
public:
	townsGame(string dir);
	void play();
	void check_city(string city) const;
	void multiplay(int pos, int players);
};


