#include <iostream>
#include <sstream>
using namespace std;
int main()
{   
	int arr[5] = {4, 55, 22, 33, 3};

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}

	// parr adress equal arr adress
	int *parr = arr;
	cout << endl;

	for (int i = 0; i < 5; ++i)
	{
		// Р—РЅР°С‡РµРЅРёРµ Р»РµР¶Р°С‰РµРµ РїРѕ Р°РґСЂРµСЃСЃСѓ
		cout << *(parr + i) << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; ++i)
	{
		// Р—РЅР°С‡РµРЅРёРµ Р»РµР¶Р°С‰РµРµ РїРѕ Р°РґСЂРµСЃСЃСѓ
		cout << *(arr + i) << " ";
	}
		cout << endl;
		for (int i = 0; i < 5; ++i)
		{
			
		cout << parr[i] << " ";
		}

	cin.get();
	return 0;
}
