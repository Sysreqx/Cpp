#include "place.h"

int main()
{
	place p;
	p.print();

	cout << "\n";

	// Anti-diagonal.
	p.push(1, 1);
	p.push(2, 1);
	p.push(2, 1);
	p.push(3, 2);
	p.push(3, 2);
	p.push(3, 1);
	p.push(4, 2);
	p.push(4, 1);
	p.push(4, 2);
	p.push(4, 1);
	p.push(1, 1);
	p.push(1, 1);
	p.push(1, 2);
	p.push(2, 2);

	//// Main Diagonal.
	//p.push(1, 1);
	//p.push(2, 1);
	//p.push(2, 1);
	//p.push(3, 2);
	//p.push(3, 2);
	//p.push(3, 1);
	//p.push(4, 2);
	//p.push(4, 1);
	//p.push(4, 2);
	//p.push(4, 1);


	p.print();
	p.check();
	system("pause");
	return 0;
}