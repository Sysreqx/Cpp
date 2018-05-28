
//заполнить вектор векторов
template<class T>
void fillVector(std::vector<std::vector<T>> &vectorIn, int n, int m);

//Вывести вектор векторов.
template<class T>
void printVector(std::vector<std::vector<T>> const& vectorIn, int n, int m);

int main ()
{
	return 0;
}

template<class T>
void fillVector(std::vector<std::vector<T>> &vectorIn, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		std::vector <T> v;
		v.clear();
		for (int j = 0; j < m; j++)
		{
			T c;
			std::cin >> c;
			v.push_back(c);
		}
		vectorIn.push_back(v);
	}
}

template<class T>
void printVector(std::vector<std::vector<T>> const & vectorIn, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << vectorIn[i][j] << " ";
		}
		std::cout << std::endl;
	}
}