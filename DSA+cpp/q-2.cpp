#include <iostream>
using namespace std;

int main()
{
    int n;
    int rem;
    int rev = 0;
    int i = 0;
    int x = 0;
    int y;

    cout << endl << "Enter the Number :- ";
    cin >> n;
    y = n;

    rem = n;
    while (rem != 0)
    {
        rev = rev * 10 + (rem % 10);
        rem /= 10;
    }
    while (rev != 0)
    {
        i++;
        int digit = rev % 10;
        int num = 1;

        for (int j = 1; j <= i; j++)
                num *= digit;
        
        x += num;
        rev /= 10;
    }
    if (x == y)
        cout << y << " is a Disarium Number";
    
    else
        cout << y << " is not a Disarium Number";
    
}
