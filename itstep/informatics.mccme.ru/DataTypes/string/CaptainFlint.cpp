#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
// #include <iomanip>
// #include <io.h>       // _eof
// #include <cstring>
// #include <sstream>
using namespace std;

int main()
{
	string s = " ";
	int fCoor = 0;
	int sCoor = 0;

	while (s != "")
	{
		getline(cin, s);

			// if string contain "South", convert str to int and purge from coordinate y(sCoor);
		if (s.find("South") != string::npos)
		{
			// erase string from first letter to six letter
			s.erase(0, 6);
			// concatinate strings
			s = "-" + s;
			// string to int;
			int x = stoi (s, 0);
			sCoor += x;
			// cout << sCoor;
		}
		// if string contain "South", convert str to int and add more to coordinate y(sCoor);
		if (s.find("North") != string::npos)
		{
			s.erase(0, 6);
			int x = stoi (s, 0);
			sCoor += x;
		}
		if (s.find("West") != string::npos)
		{
			s.erase(0, 5);
			s = "-" + s;
			int x = stoi (s, 0);
			fCoor += x;
		}
		if (s.find("East") != string::npos)
		{
			s.erase(0, 5);
			int x = stoi (s, 0);
			fCoor += x;
		}
	}

	cout << fCoor << " " << sCoor << endl;

	system("pause");
	return 0;
}