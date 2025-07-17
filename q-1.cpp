#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter any number: ";
    cin >> n;

    int a = 1;
    int b = 1;
    int i = 0;

    while (i < n)
    {
        cout << a << endl;
        a = b + a;
        b++;
        i++;
    }

    cout << endl;
}