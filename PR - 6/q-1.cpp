#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << endl
         << "Program to find length of a string...." << endl;

    cout << "----------------------------------------" << endl;

    char string[100];
    cout << "Enter any string: ";

    gets(string);

    int length = 0;
    for (int i = 0; string[i] != 0; i++)
    {
        length++;
    }

    cout << "----------------------------------------" << endl;
    cout << "The output is: " << endl;
    cout << "The length of a string is: " << length << endl;

    cout << endl;
    return 0;
}