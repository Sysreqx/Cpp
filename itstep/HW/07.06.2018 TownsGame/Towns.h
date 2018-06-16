#pragma once
#include <map>
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <vector>
using namespace std;

class townsGame {
	map < string, int > towns;
	char nextWord = '.';
	string dir;
	vector<int> maxPlayers;
public:
	townsGame(string dir, int mP);
	void play();
	void check_city(string city) const;
	void multiplay(int pos);
};


