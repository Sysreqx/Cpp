#pragma once
// �������� ������� � ���������� ������
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
	// ���������� ������� � ���������� �����.
	void FileCombineFunc(string fileName);
	// ������ �������� ������
	void addToMap(map<string, string>& m);
};

