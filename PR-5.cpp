#include <iostream>
using namespace std;

// UDF

// addition
int add(int digit1, int digit2)
{
    return digit1 + digit2;
}

// subtraction
int subtract(int digit1, int digit2)
{
    return digit1 - digit2;
}

// multiplication
int multiply(int digit1, int digit2)
{
    return digit1 * digit2;
}

// division
int divide(int digit1, int digit2)
{
    return digit2 != 0 ? digit1 / digit2 : 0;
}

// modulus
int mod(int digit1, int digit2)
{
    return digit2 != 0 ? digit1 % digit2 : 0;
}

int main()
{

    cout << endl
         << "Simple Calculator using Functions" << endl;
    cout << "--------------------------------" << endl;

    int press, digit1, digit2;

    do
    {
        cout << endl
             << "Choose an operation:" << endl;
        cout << "--------------------------------" << endl;
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for Exit" << endl;

        cout << endl
             << "Enter your press: ";
        cin >> press;
        cout << endl;

        if (press == 0)
        {
            cout << "Exiting the program..." << endl;
            break;
        }

        cout << "Enter the first number: ";
        cin >> digit1;
        cout << "Enter the second number: ";
        cin >> digit2;
        cout << endl;

        switch (press)
        {
        case 1:
            cout << "Addition : " << digit1 << " + " << digit2 << " => " << add(digit1, digit2) << endl;
            break;
        case 2:
            cout << "Subtraction : " << digit1 << " - " << digit2 << " => " << subtract(digit1, digit2) << endl;
            break;
        case 3:
            cout << "Multiplication : " << digit1 << " * " << digit2 << " => " << multiply(digit1, digit2) << endl;
            break;
        case 4:
            cout << "Division : " << digit1 << " / " << digit2 << " => " << divide(digit1, digit2) << endl;
            break;
        case 5:
            cout << "Modulus : " << digit1 << " % " << digit2 << " => " << mod(digit1, digit2) << endl;
            break;
        default:
            cout << "wrong... choice!.. Please try again....." << endl;
        }
    } while (press != 0);

    return 0;
}