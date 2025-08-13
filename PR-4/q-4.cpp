#include <iostream>
using namespace std;
 main()
{

    cout << endl
         << "Sum of Row and Column in a 2D array" << endl;
    cout << "-------------------------------------" << endl;

    int row, col, rowNumber, colNumber, sumRow = 0, sumCol = 0;

    cout << "Enter the no. Rows : ";
    cin >> row;
    cout << "Enter the no. Columns : ";
    cin >> col;

    // taking array value
    int a[row][col];
    cout << endl
         << endl
         << "Enter the value of array : " << endl;
         
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the value of a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl
         << endl
         << "Enter the number of row you went to sum : ";
    cin >> rowNumber;
    cout << endl
         << endl
         << "Enter the number of column you went to sum : ";
    cin >> colNumber;

    // sum
    cout << endl
         << endl
         << "Element of row " << rowNumber << " : \n";
    for (int i = rowNumber; i <= rowNumber; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
            sumRow += a[i][j];
        }
    }
    cout << endl
         << endl
         << "Sum of Row " << rowNumber << " is : " << sumRow;

    cout << endl
         << endl
         << "Element of column " << colNumber << " : \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = colNumber; j <= colNumber; j++)
        {
            cout << a[i][j] << "\t";
            sumCol += a[i][j];
        }
    }
    cout << endl
         << endl
         << "Sum of Column " << colNumber << " is : " << sumCol;
}