#include <iostream>
#include <string>
using namespace std;

int main()
{   
	int n;
	cin >> n;
	int a1[n];
	//array
	for (int i = 0; i < n; ++i)
	{
		cin >> a1[i];
	}

	int m;
	cin >> m;
	int cnt_begin, cnt_end;
	//subarray

	for (int j = 0; j < m; ++j)
	{
		cin >> cnt_begin >> cnt_end;
		--cnt_begin;
		--cnt_end;
		for (; cnt_begin <= cnt_end; ++cnt_begin)
		{
			cout << a1[cnt_begin] << " ";
		}
		cout << endl;
	}

	// system("pause");
	return 0;
}
