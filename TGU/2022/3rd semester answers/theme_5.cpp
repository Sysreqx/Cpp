//5. Физическая реализация стека с помощью динамических переменных.


#include <iostream>
#include <cstdlib>
using namespace std;

// Define the default capacity of the stack
#define SIZE 10

// A class to represent a stack
class Stack
{
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size = SIZE);         // constructor
    ~Stack();                       // destructor

    void push(int);
    int pop();
    int peek();

    int size();
    bool isEmpty();
    bool isFull();
};

// Constructor to initialize the stack
Stack::Stack(int size)
{
    arr = new int[size];
    capacity = size;
    top = -1;
}

// Destructor to free memory allocated to the stack
Stack::~Stack() {
    delete[] arr;
}

// Utility function to add an element `x` to the stack
void Stack::push(int x)
{
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Inserting " << x << endl;
    arr[++top] = x;
}

// Utility function to pop a top element from the stack
int Stack::pop()
{
    // check for stack underflow
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Removing " << peek() << endl;

    // decrease stack size by 1 and (optionally) return the popped element
    return arr[top--];
}

// Utility function to return the top element of the stack
int Stack::peek()
{
    if (!isEmpty()) {
        return arr[top];
    }
    else {
        exit(EXIT_FAILURE);
    }
}

// Utility function to return the size of the stack
int Stack::size() {
    return top + 1;
}

// Utility function to check if the stack is empty or not
bool Stack::isEmpty() {
    return top == -1;               // or return size() == 0;
}

// Utility function to check if the stack is full or not
bool Stack::isFull() {
    return top == capacity - 1;     // or return size() == capacity;
}

