#include <iostream>
using namespace std;

// UDF (User Defind Fuction) to print cubes

void Cubes(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << (*(p + i)) * (*(p + i)) * (*(p + i)) << "\t";
        cout << endl;
    }
}

int main()
{

    cout << endl
         << "Program to find cubes of all elements of a 2D array...." << endl;
    cout << "----------------------------------------" << endl;

    int n;

    cout << "The input is" << endl;
    cout << "Enter array size : ";
    cin >> n;

    int a[n][n];

    cout << endl
         << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    cout << "----------------------------------------" << endl;
    cout << endl
         << "The output is" << endl;
    cout << "Cubes of all elements:" << (*a, n * n) << endl;
    Cubes(*a, n * n);
    cout << endl;
    return 0;
}