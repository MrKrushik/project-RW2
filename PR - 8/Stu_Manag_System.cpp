#include <iostream>
#include <vector>
using namespace std;

template <class T>
class StudentManager
{
private:
    vector<T> studentIDs;
    vector<string> studentNames;

    T studentID;
    string studentName;

public:
    void addStudent()
    {
        cout << endl;
        cout << "----- Add Student details -----" << endl;
        cout << "---------------------------------" << endl;
        cout << "Enter Student ID: ";
        cin >> studentID;
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        studentIDs.push_back(studentID);
        studentNames.push_back(studentName);
        cout << "---------------------------------" << endl;
        cout << endl
             << "Student added successfully!" << endl
             << endl;
        cout << "---------------------------------" << endl;
    }

    void displayAll()
    {
        if (studentIDs.empty())
        {
            cout << "--------------------------------" << endl;
            cout << "No students data available........!" << endl
                 << endl;
            cout << "--------------------------------" << endl;
            return;
        }

        else
        {
            cout << "All Students:" << endl
                 << endl;
            for (int i = 0; i < studentIDs.size(); i++)
            {
                cout << "Student -> [" << (i + 1) << "]: " << endl;
                cout << "ID -> : " << studentIDs[i] << endl
                     << "Name -> : " << studentNames[i] << endl
                     << endl;
            }
            cout << endl;
        }
    }

    void searchStudent()
    {
        T search;
        cout << endl;
        cout << "Enter ID to Search : ";
        cin >> search;
        cout << endl;
        for (int i = 0; i < studentIDs.size(); i++)
        {
            if (studentIDs[i] == search)
            {
                cout << endl << "Student Details:" << endl
                     << endl;
                cout << "--------------------------------" << endl;
                cout << "ID -> : " << studentIDs[i] << endl
                     << "Name -> : " << studentNames[i] << endl;
                cout << endl;
                return;
            }
        }
        cout << "Student ID " << search << " Sorry...!! ID is not found! " << endl
             << endl;
    }

    void removeStudent()
    {
        T remove;
        cout << "Enter ID to Remove: ";
        cin >> remove;

        for (int i = 0; i < studentIDs.size(); i++)
        {
            if (studentIDs[i] == remove)
            {
                studentIDs.erase(studentIDs.begin() + i);
                studentNames.erase(studentNames.begin() + i);
                cout << "Student removed successfully!" << endl
                     << endl;
                return;
            }
        }
        cout << "Student ID " << remove << " Sorry...!! ID is not found! " << endl
             << endl;
    }
};
