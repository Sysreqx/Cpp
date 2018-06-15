#include <algorithm>
#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
using namespace std;

int 
	string str, tmp;
	cin >> str;
	tmp = str;
	reverse(str.begin(), str.end());
	if (str == tmp)
	    cout << "yes";
	else
	    cout << "no";
	return 0;


int main()
{
	string s;
	getline(cin, s);

	system("pause");
	return 0;
}