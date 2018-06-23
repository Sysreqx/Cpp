#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
	char ch;
	int h, m;
	int h_s, m_s;
	cin >> h >> ch >> m;
	cin >> h_s >> m_s;

	h = ((h + h_s) + (m + m_s) / 60) % 24;
	m = (m + m_s) % 60;

	cout << setfill('0') << setw(2) << h << ch << setfill('0') << setw(2) << m << endl;
	
	// system("pause");
	return 0;
}
