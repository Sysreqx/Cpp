#include <iostream>
#include <string>
using namespace std;

	//РЈРєР°Р·Р°С‚РµР»СЊ РЅР° С„СѓРЅРєС†РёСЋ
	// РўРёРї С„СѓРЅРєС†РёРё(*РёРјСЏ СѓРєР°Р·Р°С‚РµР»СЏ)(СЃРїРµС†РёС„РёРєР°С†РёСЏ РїР°СЂР°РјРµС‚СЂРѕРІ);

string DataFromBD()
{
	return "Data From Bd";
}

string DataFromWEbServer()
{
 return "Data from WEbServer";
}

void showInfo(string(*foo)())
{
	cout << foo() << endl;
}

int main()
{
	showInfo(DataFromWEbServer);
	system("pause");
}