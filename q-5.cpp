#include <iostream>
using namespace std;

int main()
{
    char skip = 'a';
    do
    {
        cout << skip << " ";
        skip = skip + 4; 
        
    } while (skip <= 'z');
}