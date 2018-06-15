#include <iostream>
using namespace std;
 
int main()
{   
    int a;
    cin >> a;
    int b = 1;
    while (b < a)
    	b *= 2;
    if (b == a)
    	cout << "YES";
    else
    	cout << "NO";
		// system("pause");
}