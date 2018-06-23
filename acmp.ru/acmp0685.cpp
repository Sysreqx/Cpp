#include <iostream>
using namespace std;

int main()
{
	int a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	int m_p, a_p, l_p, m_v, a_v, l_v;
	if (a1 >= a2 && a1 >= a3)
	{
		m_p = a1;
		if (a2 >= a3)
		{
			a_p = a2;
			l_p = a3;
		}
		else
		{
			a_p = a3;
			l_p = a2;
		}
	}
	if (a2 >= a1 && a2 >= a3)
	{
		m_p = a2;
		if (a1 >= a3)
		{
			a_p = a1;
			l_p = a3;
		}
		else
		{
			a_p = a3;
			l_p = a1;
		}
	}
	if (a3 >= a2 && a3 >= a1)
	{
		m_p = a3;
		if (a2 >= a1)
		{
			a_p = a2;
			l_p = a1;
		}
		else
		{
			a_p = a1;
			l_p = a2;
		}
	}
	///////
	if (b1 >= b2 && b1 >= b3)
	{
		m_v = b1;
		if (b2 >= b3)
		{
			a_v = b2;
			l_v = b3;
		}
		else
		{
			a_v = b3;
			l_v = b2;
		}
	}
	if (b2 >= b1 && b2 >= b3)
	{
		m_v = b2;
		if (b1 >= b3)
		{
			a_v = b1;
			l_v = b3;
		}
		else
		{
			a_v = b3;
			l_v = b1;
		}
	}
	if (b3 >= b2 && b3 >= b1)
	{
		m_v = b3;
		if (b2 >= b1)
		{
			a_v = b2;
			l_v = b1;
		}
		else
		{
			a_v = b1;
			l_v = b2;
		}
	}
	
	int s_m, s_a, s_l;
	s_m = m_v * m_p;
	s_a = a_v * a_p;
	s_l = l_v * l_p;
	cout << s_m + s_a + s_l;
	// system("pause");
}