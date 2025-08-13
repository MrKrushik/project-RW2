#include <iostream>
using namespace std;

main()
{

    cout << endl
         << "Transpose of a 2D array" << endl;
    cout << "--------------------------------" << endl;
    
    int row, col;
    cout << "Enter number of row: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int a[row][col];

    // Input
    cout << "array input of :-" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "Original Matrix:-" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose Matrix:-" << endl;

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}