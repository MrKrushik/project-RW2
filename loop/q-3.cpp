#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter any number: ";
    cin >> n;

    int digit = 0;
    int i = 1;

    while (n > 0 || digit > 9)
    {
        if (n == 0)
        {
            n = digit;  
            digit = 0; 
            i++;
        }
        digit += n % 10;
        n /= 10;
    }

    cout << " total : " << digit << endl;
}
