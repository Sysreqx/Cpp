﻿//РЁР°Р±Р»РѕРЅС‹ С„СѓРЅРєС†РёР№. РЁР°Р±Р»РѕРЅРЅС‹Рµ С„СѓРЅРєС†РёРё c++. template typename. template class. РЈСЂРѕРє #41
#include <iostream>
using namespace std;
template <typename T1, typename T2>
void Sum(T1 a, T2 b)
{
	cout << b << endl;
	cout << a << endl;
}

int main()
{
 	Sum(4, "asdf");
	cout << endl;


	system("pause");
	return 0;
}