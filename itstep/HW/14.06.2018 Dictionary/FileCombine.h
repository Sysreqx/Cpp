#pragma once
// Добавить перевод к английским словам
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
class FileCombine
{
public:
	// Объединить русский и английский файлы.
	void FileCombineFunc(string fileName);
	// Забить бинарное дерево
	void addToMap(map<string, string>& m);
};

