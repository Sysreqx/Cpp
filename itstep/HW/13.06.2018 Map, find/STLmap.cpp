#include <windows.h> //需要使用到此標頭檔 
#include <iostream>
#include <string>
#include <map>
#include <ctime>
using namespace std;

#define green SetColor(14, 0)
#define lgreen SetColor(2, 0)
#define red SetColor(4, 0)

void SetColor(int f = 15, int b = 0)
{
	unsigned short ForeColor = f + 16 * b;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, ForeColor);
}

template <typename A, typename B>
void print_elem(const pair<A, B>& p) {
	cout << "(" << p.first << ", " << p.second << ") ";
}

template<class T>
void print_collection(const T& t) {
	//cout << t.size() << " elements: ";
	for (const auto& p : t) {
		print_elem(p);
		cout << endl;
	}
	cout << endl;
}

template <typename C, class T>
void findit(const C& c, T val) {
	cout << "Trying find() on value ";
	green;
	cout << val << endl;
	SetColor();
	auto result = c.find(val);
	if (result != c.end()) {
		cout << "Element found: ";
		lgreen;
		print_elem(*result);
		cout << endl;
		SetColor();
	}
	else {
		red;
		cout << "Element not found." << endl;
		SetColor();
	}
	cout << endl;
}

int main()
{
	SetColor();
	srand(time(0));
	map<string, int> m;

	m.insert(make_pair("Smith", rand() % 1000000));
	m.insert(make_pair("Jones", rand() % 1000000));
	m.insert(make_pair("Williams", rand() % 1000000));
	m.insert(make_pair("Taylor", rand() % 1000000));
	m.insert(make_pair("Davies", rand() % 1000000));
	m.insert(make_pair("Morphed", rand() % 1000000));
	m.insert(make_pair("Brown", rand() % 1000000));
	m.insert(make_pair("Wilson", rand() % 1000000));
	m.insert(make_pair("Evans", rand() % 1000000));
	m.insert(make_pair("Thomas", rand() % 1000000));
	m.insert(make_pair("Johnson", rand() % 1000000));
	m.insert(make_pair("Roberts", rand() % 1000000));
	m.insert(make_pair("Walker", rand() % 1000000));
	m.insert(make_pair("Wright", rand() % 1000000));
	m.insert(make_pair("Robinson", rand() % 1000000));
	m.insert(make_pair("Thompson", rand() % 1000000));
	m.insert(make_pair("White", rand() % 1000000));
	m.insert(make_pair("Hughes", rand() % 1000000));
	m.insert(make_pair("Edwards", rand() % 1000000));
	m.insert(make_pair("Green", rand() % 1000000));
	m.insert(make_pair("Lewis", rand() % 1000000));
	m.insert(make_pair("Wood", rand() % 1000000));
	m.insert(make_pair("Harris", rand() % 1000000));
	m.insert(make_pair("Martin", rand() % 1000000));
	m.insert(make_pair("Jackson", rand() % 1000000));
	m.insert(make_pair("Clarke", rand() % 1000000));

	//print_collection(m);
	//русский текст

	findit(m, "Martin");
	findit(m, "Clarke");
	findit(m, "Castaneda");

	system("pause");
	return 0;
}