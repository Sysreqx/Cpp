#include <iostream>
using namespace std;

long Perevert(long x)
{
   long y = 0;
   while(x)
   {
       y = y*10 + x%10;
       x /= 10;
   }
   return y;
}

int main()
{
	long n;
	cin >> n;

	if (n == Perevert(n))
	{
		cout << "YES";
	}
	else
		cout << "NO";
	// system("pause");
}