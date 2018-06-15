#include "Stack.h"

void Stack::stack_push_back(const int & value)
{
	if (top < stack_size)
	{
		stack.push_back(value);
		++top;
	}
}

void Stack::stack_pop_back()
{
	if (top != 0)
	{
		stack.pop_back();
		--top;
	}
}

int & Stack::getTop()
{
	return stack.back();
}

int Stack::get_stack_size()
{
	return top;
}

bool Stack::empty() const
{
	return !top;
}

void Stack::print_stack()
{
	cout << "Stack: ";
	copy(stack.begin(), stack.end(), ostream_iterator<int>(cout, " ")); // вывод на экран элементов списка
	cout << "\nПоследний элемент списка: " << stack.back();
}
