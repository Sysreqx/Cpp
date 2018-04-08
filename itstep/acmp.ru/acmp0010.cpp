#include <iostream>
#include <vector>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	int** arr = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> arr[i][j];
		}
	}

	std::vector<std::string> str;

	

	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;

	system("pause");
	return 0;
}
