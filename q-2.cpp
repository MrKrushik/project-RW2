#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "enter any number: ";
    cin >> n;

    int a;
    int i = 0;
    int sum;
    int digit;

    a = n;

    while (a > 0)
    {
        i++;
        a /= 10;
    }

    sum = 0;
    a = n;

    while (a > 0)
    {
        digit = a % 10;
        sum += pow(digit, i);
        a /= 10;
        i--;
    }

    if (sum == n)
        cout << n << " is a Disarium Number" << endl;
    else
        cout << n << " is a not Disarium Number" << endl;

        cout << endl;
}
