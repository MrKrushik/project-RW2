#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{
    int n, value;
    cout << endl
         << "----------------------------------------\n";
    cout << "          STACK IMPLEMENTATION\n";
    cout << "----------------------------------------\n";
    cout << "Enter size Of Stack: ";
    cin >> n;
    Stack stack(n);

    int choice;
    do
    {
        cout << "\n----------------------------------------\n";
        cout << "          STACK OPERATIONS MENU\n";
        cout << "----------------------------------------\n";
        cout << "1. Push (Enter) Element In Stack\n";
        cout << "2. Pop (Remove) Element From Stack\n";
        cout << "3. Peek Element From Stack\n";
        cout << "4. Display Stack Elements\n";
        cout << "5. Check if Stack is Empty\n";
        cout << "6. Check if Stack is Full\n";
        cout << "0. Exit Program\n";
        cout << "----------------------------------------\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        cout << endl;
        switch (choice)
        {
        case 1:
            cout << "Enter Element To Push: ";
            cin >> value;
            stack.Push(value);
            cout << "Element " << value << " pushed successfully.\n";
            break;

        case 2:
            stack.Pop();
            cout << "Element removed successfully (if any).\n";
            break;

        case 3:
            stack.Pop();
            cout << "Element removed successfully (if any).\n";
            break;

        case 4:
            cout << "Current Stack Elements:\n";
            cout << "-----------------------\n";
            stack.Display();
            cout << "-----------------------\n";
            break;

        case 5:
            stack.IsEmpty();
            break;

        case 6:
            stack.IsFull();
            break;

        case 0:
            cout << "----------------------------------------\n";
            cout << "Exiting...\n";
            cout << "----------------------------------------\n";
            cout << "Program Ended Successfully.\n";
            break;

        default:
            cout << "Sorry.....!! Invalid Choice. Please Try Again.\n"
                 << endl;
        }

    } while (choice != 0);

    return 0;
}
