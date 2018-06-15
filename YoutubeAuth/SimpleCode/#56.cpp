#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	//space memory for arr
	int** arr = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			arr[i][j] = rand() % 11;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// delete memory for arr
	//СѓРґР°Р»СЏС‚СЊ РІ РѕР±СЂР°С‚РЅРѕРј РїРѕСЂСЏРґРєРµ, РІ РєРѕС‚РѕСЂРѕРј СЃРѕР·РґР°РІР°Р»
	for (int i = 0; i < n; ++i)
	{
		// РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ СѓРґР°Р»РёС‚СЊ arr[i], РїРѕС‚РѕРјСѓ С‡С‚Рѕ СЃРѕР·РґР°Р» @@arr[i]@@ = new int[m];
		delete [] arr[i];
	}
	// РґРѕСЃС‚Р°С‚РѕС‡РЅРѕ СѓРґР°Р»РёС‚СЊ arr, РїРѕС‚РѕРјСѓ С‡С‚Рѕ СЃРѕР·РґР°Р» int** @@arr@@ = new int* [n];
	delete [] arr;

	system("pause");
	return 0;
}