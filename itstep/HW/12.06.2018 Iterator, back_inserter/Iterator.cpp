#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <list>
#include <ctime>

using namespace std;

int main()
{
	// 1
	srand(time(0));
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i * i);

	ofstream fout("1.txt");
	ostream_iterator<int> out(cout, " ");
	ostream_iterator<int> outO(fout, " ");
	copy(v.rbegin(), v.rend(), out);
	copy(v.rbegin(), v.rend(), outO);
	cout << endl;

	fout.close();

	vector<int>::reverse_iterator ri;
	for (ri = v.rbegin(); ri != v.rend(); ri++)
		cout << *ri << " ";
	cout << endl;
	cout << endl;
	cout << endl;
	// 2
	vector<int> q;
	for (int i = 0; i < 10; i++)
		q.push_back(i);

	for (int i = 0; i < 3; i++)
		inserter(q, q.begin() + 9) = 50;

	for (auto i : q)
		cout << i << " ";
	cout << endl;
	cout << endl;
	cout << endl;
	// 3
	list<int> e;
	list<int>::iterator t;
	back_insert_iterator<list<int>> r(e);
	for (int i = 0; i < 30; i++, r++) *r = rand() % 1001;

	for (auto i : e)
		cout << i << " ";
	cout << endl;

	/*for (t = e.begin(); t != e.end(); t++)
	{
		if (*t > 500)
			e.erase(t);
	}*/

	/*while (t != e.end()) {
		if (*t > 500)
			t = e.erase(t);
	}*/

	/*for (; t != e.end(); ) {
		if (*t > 500) {
			t = e.erase(t);
		}
		else {
			++t;
		}
	}*/

	/*list<int>::iterator it;
	for (it = e.begin(); it != e.end();)
	{
		list<int>::iterator curr = it++;
		if (*it > 500)
			e.erase(curr);
	}*/

	list<int> y;
	for (t = e.begin(); t != e.end(); t++)
	{
		if (*t < 500)
			back_inserter(y) = *t;
	}

	for (auto i : y)
		cout << i << " ";
	cout << endl;

	cout << endl;
	system("pause");
	return 0;
}