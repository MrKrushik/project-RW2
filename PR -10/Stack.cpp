#include <iostream>
using namespace std;

class Stack
{
    int *a;
    int n, top;
    int count;

public:
    Stack(int n)
    {
        this->n = n;
        this->a = new int[n];
        this->top = -1;
        this->count = 0;
    }

    ~Stack()
    {
        delete[] a;
    }

    void Push(int value)
    {
        if (this->top == n - 1)
        {
            cout << "----------------------------------------\n";
            cout << "Stack Overflow! Cannot push " << value << ".\n";
            cout << "----------------------------------------\n";
        }
        else
        {
            this->top++;
            this->a[this->top] = value;
            cout << "----------------------------------------\n";
            cout << "Value " << value << " pushed successfully.\n";
            cout << "----------------------------------------\n";
            this->count++;
        }
    }

    void Pop()
    {
        if (this->top == -1)
        {
            cout << "----------------------------------------\n";
            cout << "Stack Underflow! No element to pop.\n";
            cout << "----------------------------------------\n";
        }
        else
        {
            cout << "----------------------------------------\n";
            cout << "Popped Value: " << this->a[this->top] << "\n";
            top--;
            cout << "----------------------------------------\n";
        }
    }
    void Peek()
    {
        if (this->top == -1)
        {
            cout << "----------------------------------------\n";
            cout << "Stack is empty. No top element.\n";
            cout << "----------------------------------------\n";
        }
        else
        {
            cout << "----------------------------------------\n";
            cout << "Top Element: " << this->a[this->top] << "\n";
            cout << "----------------------------------------\n";
        }
    }

    void Display()
    {
        if (this->top == -1)
        {
            cout << "----------------------------------------\n";
            cout << "Stack is empty. No elements to display.\n";
            cout << "----------------------------------------\n";
        }
        else
        {
            cout << "----------------------------------------\n";
            cout << "Stack Elements (Top to Bottom):\n";
            cout << "-------------------------------\n";
            for (int i = this->top; i >= 0; i--)
            {
                cout << "| " << this->a[i] << " |\n";
            }
            cout << "-------------------------------\n";
            cout << "----------------------------------------\n";
        }
    }

    void IsEmpty()
    {
        cout << "----------------------------------------\n";
        if (this->top == -1)
            cout << "Stack is Empty.\n";
        else
            cout << "Stack is Not Empty.\n";
        cout << "----------------------------------------\n";
    }

    void IsFull()
    {
        cout << "----------------------------------------\n";
        if (this->top == this->n - 1)
            cout << "Stack is Full.\n";
        else
            cout << "Stack is Not Full.\n";
        cout << "----------------------------------------\n";
    }
    void length()
    {
        cout << "----------------------------------------\n";
        cout << "Current Stack Size: " << this->count << "\n";
        cout << "----------------------------------------\n";
    }
};
