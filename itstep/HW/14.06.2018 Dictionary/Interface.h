#pragma once
// ƒобавить перевод к английским словам
#include <iostream>
#include <fstream> //ifstream ofstream
#include <algorithm> //transform , sort
#include <cctype> //tolower 
#include <string>
#include <vector>

#include <utility>
#include <map>
#include <Windows.h>
// #include <iomanip> // hz why
using namespace std;
class Interface
{
public:
	void header(map<string, string>& m, int exitz);
	int enterWordEnglish(map<string, string>& m);
	int enterWordRussian(map<string, string>& m);
	void dicInterface(map<string, string>& m);
};

