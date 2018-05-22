#include "Stack.h"

int main()
{
	setlocale(0, "");

	Stack s;
	for (int i = 0; i < 10; i++)
		s.stack_push_back(rand()%10);
	s.print_stack();

	system("pause");
	return 0;
}