#include "Stu_Manag_System.cpp"
#include <string.h>
using namespace std;

int main()
{
    StudentManager<int> sm;
    int choice;

    do
    {
        cout << endl;
        cout << "===== Student Management System =====" << endl;
        cout << "-------------------------------------" << endl;
        cout << "1. Add Student Data.." << endl;
        cout << "2. Show.. All Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Remove Student" << endl;
        cout << "5. Exit" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Enter your choice: ";
        cout << "-------------------------------------" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            sm.addStudent();
            break;
        case 2:
            sm.displayAll();
            break;
        case 3:
            sm.searchStudent();
            break;
        case 4:
            sm.removeStudent();
            break;
        case 5:
            cout << "Thanks for using the program !!!..Exit..." << endl
                 << endl;
            break;
        default:
            cout << "Invalid option, please try again.....!" << endl
                 << endl;
        }
    } while (choice != 5);

    return 0;
}
