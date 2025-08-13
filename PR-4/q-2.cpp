#include <iostream>
using namespace std;

main()
{
    cout << endl
         << "Largest element in a 2D array" << endl;
    cout << "--------------------------------" << endl;

    int row, col;
    cout << "Enter number of row:- ";
    cin >> row;
    cout << "Enter number of columns:- ";
    cin >> col;

    int a[row][col];
    // input
    cout << "array input of :-" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }

    int largest;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (a[i][j] > largest)
                largest = a[i][j];

    cout << "Largest number in the array is: " << largest << endl;
}