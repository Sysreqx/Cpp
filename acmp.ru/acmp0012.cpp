#include <iostream>
#include <algorithm>

template <typename T>
T TrArea(T x1, T y1, T x2, T y2, T x3, T y3) {
	return (x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1);
}

int main()
{
	int n, cnt = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		long long x, y, x1, y1, x2, y2, x3, y3, x4, y4;
		std::cin >> x >> y >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		long long s1 = TrArea(x1, y1, x2, y2, x, y);
		long long s2 = TrArea(x2, y2, x3, y3, x, y);
		long long s3 = TrArea(x3, y3, x4, y4, x, y);
		long long s4 = TrArea(x4, y4, x1, y1, x, y);
		if (s1 >= 0 && s2 >= 0 && s3 >= 0 && s4 >= 0 ||
			s1 <= 0 && s2 <= 0 && s3 <= 0 && s4 <= 0)
			++cnt;
	}
std::cout << cnt << std::endl;

// system("pause");
return 0;
}