#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Student
{
	string name;
	string second_name;
	int year;
} apple, banana, melon, watermelon;

int main()
{
	vector<Student> students;
	apple.name = "apple";
	apple.second_name = "apple S";
	apple.year = 12;
	students.push_back(apple.year);

	banana.name = "banana";
	banana.second_name = "banana S";
	banana.year = 19;
	students.push_back(banana.year);

	melon.name = "melon";
	melon.second_name = "melon S";
	melon.year = 34;
	students.push_back(melon.year);

	watermelon.name = "watermelon";
	watermelon.second_name = "watermelon S";
	watermelon.year = 25;
	students.push_back(watermelon.year);

	sort(students.begin(), students.end());
	for (int i = 0; i < 4; ++i)
	{
		cout << students[i] << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}

