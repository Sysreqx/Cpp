#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Student
{
	string name;
	string second_name;
	int year;
};

void Sort(Student **q, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (q[j]->year > q[j+1 -> year])
			{
				Student *temp = q[j];
				q[j] = q[j + 1];
				q[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int n = 4;
	Student *s = new Student[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i].name >> s[i].second_name >> s[i].year;
	}
	Student **q = new Student*[n];
	for (int i = 0; i < n; ++i)
	{
		q[i] = &s[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout << q[i] -> name <<  endl;
		cout << q[i] -> second_name <<  endl;
		cout << q[i] -> year <<  endl << endl;
	}

	system("pause");
	return 0;
}

