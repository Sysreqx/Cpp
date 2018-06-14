#include "FileCombine.h"
#include "Interface.h"

int main()
{
	FileCombine f;
	Interface i;
	map<string, string> m;
	f.addToMap(m);
	/*for (auto i : m)
			cout << i.first << " " << i.second << endl;*/

	i.dicInterface(m);

	system("pause");
	return 0;
}