
#include <iostream>
using namespace std;

int main()
{
    char a;
    char b;

    cout << endl << "Enter a character: ";
    cin >> a;
    cout << endl << "Enter end character: ";
    cin >> b;

    char ans = a;
    do
    {
        cout << ans << endl;
        ans++;
        
    } while (ans <= b);
}