#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

int s5(std::vector<int> &v);
int s3(std::vector<int> &v);
int s1(std::vector<int> &v);

int main()
{
	int n, t;
	std::cin >> n;
	std::vector<int> v;
	for (int i = 0; i < n; i++)
	{
		std::cin >> t;
		v.push_back(t);
	}
	int a = s5(v);
	int b = s3(v);
	int c = s1(v);
	if (a < b && a < c)
		std::cout << 5;
	else if (b <= a && b < c)
		std::cout << 3;
	else
		std::cout << 1;
	//system("pause");
	return 0;
}

int s5(std::vector<int>& v)
{
	int s = 0;
	for (int i = v.size() - 1; i >= 0; i--)
		s += s + v[i];
	return s;
}

int s3(std::vector<int>& v)
{
	int s = 0;
	for (int i = 0; i < v.size(); i++)
		s += s + v[i];
	return s;
}

int s1(std::vector<int>& v)
{
	int s = 0;
	std::sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		s += s + v[i];
	return s;
}
