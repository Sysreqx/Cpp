#include "Stack.h"

int main()
{
	Stack s;
	s.stack_push_back(5);
	cout << s.getTop();
	s.stack_push_back(3);
	cout << s.getTop();
	s.stack_push_back(8);
	cout << s.getTop();

	cout << endl;
	s.stack_pop_back();
	cout << s.getTop();
	cout << endl;
	cout << s.empty();

	system("pause");
	return 0;
}