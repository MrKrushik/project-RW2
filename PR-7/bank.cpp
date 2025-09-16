#include <iostream>
using namespace std;

class BankCore
{
    int accID;
    char custName[40];

protected:
    long accBal;
    double transAmt;

public:
    void createAccount()
    {
        cout << "\nEnter Account Details\n";
        cout << "-------------------------\n";
        cout << "Enter Account ID\t: ";
        cin >> accID;
        cout << "Enter Customer Name\t: ";
        cin >> custName;
        cout << "Enter Initial Balance\t: ";
        cin >> accBal;
        cout << "\nAccount Created Successfully!\n";
    }

    long getBalance()
    {
        return accBal;
    }

    void depositAmount()
    {
        cout << "\nEnter Deposit Amount\t: ";
        cin >> transAmt;
        accBal += transAmt;
        cout << "Deposit Successful. Updated Balance\t= " << accBal << "\n";
    }

    void enterWithdraw()
    {
        cout << "\nEnter Withdraw Amount\t: ";
        cin >> transAmt;
    }

    void performWithdraw()
    {
        if (transAmt > accBal)
        {
            cout << "Withdrawal Failed!\tBalance Not Sufficient.\n";
        }
        else
        {
            accBal -= transAmt;
            cout << "Withdrawal Successful. Updated Balance\t= " << accBal << "\n";
        }
    }

    void showBalance()
    {
        cout << "\nCurrent Balance\t= " << accBal << "\n";
    }

    void accountInfo()
    {
        cout << "\nAccount Information\n";
        cout << "-------------------------\n";
        cout << "Account ID\t: " << accID << endl;
        cout << "Holder Name\t: " << custName << endl;
        cout << "Balance\t\t: " << accBal << endl;
    }
};

class SavingAccount : public BankCore
{
    float rate;

public:
    void addInterest()
    {
        rate = 0.075; // 7.5%
        float intr = accBal * rate;
        accBal += intr;

        cout << "\nSavings Account Interest\n";
        cout << "----------------------------\n";
        cout << "Rate Applied\t: " << rate * 100 << "%\n";
        cout << "Interest Gained\t: " << intr << "\n";
        cout << "Balance After\t: " << accBal << "\n";
    }
};

class CurrentAccount : public BankCore
{
    int overdraft;

public:
    void overdraftCheck()
    {
        overdraft = accBal;
        enterWithdraw();
        if (transAmt > overdraft)
        {
            cout << "\nOverdraft Limit Crossed!\tCannot Withdraw.\n";
        }
        else
        {
            performWithdraw();
        }
    }
};

class FixedDeposit : public BankCore
{
    int period;

public:
    float interestEarned;

    void fdSummary()
    {
        period = 12;
        interestEarned = accBal * 0.07 * (12 / period);

        cout << "\nFixed Deposit Summary\n";
        cout << "-------------------------\n";
        cout << "Term (Months)\t: " << period << "\n";
        cout << "Principal\t: " << accBal << "\n";
        cout << "FD Interest\t: " << interestEarned << "\n";
        cout << "Maturity Value\t: " << accBal + interestEarned << "\n";
    }
};
