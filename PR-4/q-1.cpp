#include <iostream>
using namespace std;

main()
{
    cout << endl
         << "Negative elements in an array" << endl;
    cout << "--------------------------------" << endl;
    
    int size;
    cout << "Enter of the array size: ";
    cin >> size;

    int a[size];
    cout << endl
         << "Array input" << endl;

    // input
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "]:- ";
        cin >> a[i];
    }
    cout << endl
         << "Array Negative elements: ";

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}