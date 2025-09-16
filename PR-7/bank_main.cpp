#include "Bank.cpp"
using namespace std;

int main()
{
    int choice;
    SavingAccount sa;
    CurrentAccount ca;
    FixedDeposit fd;

    do
    {
        cout << endl;
        cout << "\nBank Menu\n";
        cout << "-------------------------\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Show Balance\n";
        cout << "5. Account Info\n";
        cout << "6. Add Interest (Savings)\n";
        cout << "7. Overdraft Check (Current)\n";
        cout << "8. FD Summary\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            sa.createAccount();
            break;
        case 2:
            sa.depositAmount();
            break;
        case 3:
            sa.enterWithdraw();
            sa.performWithdraw();
            break;
        case 4:
            sa.showBalance();
            break;
        case 5:
            sa.accountInfo();
            break;
        case 6:
            sa.addInterest();
            break;
        case 7:
            ca.overdraftCheck();
            break;
        case 8:
            fd.fdSummary();
            break;
        case 9:
            cout << "\nExiting Program...\n";
            break;
        default:
            cout << "Invalid Choice. Try Again.\n";
        }
    } while (choice != 9);

    return 0;
}
