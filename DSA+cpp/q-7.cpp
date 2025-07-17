#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter any number: ";
    cin >> n;

    int a;
    int b;
    int sum;

    b = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }
    a = n;
    sum = a + b;

    cout << "The sum is " << sum << endl;

    cout << endl;
}