#include <iostream>
#include "Crud_link.cpp"
using namespace std;

int main()
{
    LinkedList list;
    int choice, data, index;

    do
    {
        cout << "=============================\n";
        cout << "        LINKED LIST MENU     \n";
        cout << "=============================\n";

        cout << "1. Insert is data Beginning\n";
        cout << "2. Search list Data\n";
        cout << "3. Delete Data is Position\n";
        cout << "4. Reverse the List Data\n";
        cout << "5. Display All List Data\n";
        cout << "0. Exit\n";
        cout << "-----------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter data to insert: ";
            cin >> data;
            list.insertAtBeginning(data);
            break;

        case 2:
            cout << "Enter position to search: ";
            cin >> index;
            list.searchData(index);
            break;

        case 3:
            cout << "Enter position to delete: ";
            cin >> index;
            list.deleteAtPosition(index);
            break;

        case 4:
            list.reverseList();
            break;

        case 5:
            list.displayAll();
            break;

        case 0:
            cout << "\nExiting program...\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
            break;
        }
    } while (choice != 0);

    return 0;
}
