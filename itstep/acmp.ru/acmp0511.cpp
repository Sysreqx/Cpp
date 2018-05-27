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
//хз почему не работает
#include <iostream>     // std::cout
#include <vector>       // std::vector

int main()
{
	int cnt = 0;
	// максимальное число в очереди 1 с 8.00 по 20.00
	int q1 = ((20 - 8) * 60 - 5) / 10;
	// максимальное число в очереди 2 с 8.05 по 20.00
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
		//Вывести часы, минуты
		std::cout << queueTime[n - 1] / 60 << " " << queueTime[n - 1] % 60;
	//system("pause");
	return 0;
}
// и это тоже не работает
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