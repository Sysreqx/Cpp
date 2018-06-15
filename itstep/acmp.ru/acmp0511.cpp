#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    int t = (k - 1) * 5;
    if (t > 12 * 60) {
        cout << "NO";
    } else {
        cout << t / 60 << " " << t % 60;
    }
    return 0;
}


/*
//С…Р· РїРѕС‡РµРјСѓ РЅРµ СЂР°Р±РѕС‚Р°РµС‚
#include <iostream>     // std::cout
#include <vector>       // std::vector

int main()
{
	int cnt = 0;
	// РјР°РєСЃРёРјР°Р»СЊРЅРѕРµ С‡РёСЃР»Рѕ РІ РѕС‡РµСЂРµРґРё 1 СЃ 8.00 РїРѕ 20.00
	int q1 = ((20 - 8) * 60 - 5) / 10;
	// РјР°РєСЃРёРјР°Р»СЊРЅРѕРµ С‡РёСЃР»Рѕ РІ РѕС‡РµСЂРµРґРё 2 СЃ 8.05 РїРѕ 20.00
	int q2 = (20 - 8) * 6;
	int maxQueueLength = q1 + q2;
	std::vector<int> queueTime;
	int cntTime = 0;
	for (int i = 0; i < maxQueueLength; i++)
	{
		queueTime.push_back(cntTime);
		cntTime += 5;
	}

	int n;
	std::cin >> n;
	if (n > maxQueueLength)
		std::cout << "NO";
	else
		//Р’С‹РІРµСЃС‚Рё С‡Р°СЃС‹, РјРёРЅСѓС‚С‹
		std::cout << queueTime[n - 1] / 60 << " " << queueTime[n - 1] % 60;
	//system("pause");
	return 0;
}
// Рё СЌС‚Рѕ С‚РѕР¶Рµ РЅРµ СЂР°Р±РѕС‚Р°РµС‚
#include <iostream>     // std::cout
#include <vector>       // std::vector
 
int main()
{
    int q1 = ((20 - 8) * 60) / 10;
    int q2 = ((20 - 8) * 60) / 10 - 3;
    int maxQueueLength = q1 + q2;
 
    int n;
    std::cin >> n;
    int timeInMinutes = (n - 1) * 5;
    if (n > maxQueueLength)
        std::cout << "NO";
    else
        std::cout << timeInMinutes / 60 << " " << timeInMinutes % 60;
    //system("pause");
    return 0;
}*/