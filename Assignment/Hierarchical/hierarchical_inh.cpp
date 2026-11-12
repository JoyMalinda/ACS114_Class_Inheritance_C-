#include <iostream>
#include <string>

using namespace std;

class Account
{
    protected:
        string account_name;
        int account_number;
        double balance;

    public:
        void set_account()
        {
            account_name = "John Kamau";
            account_number = 123456;
            balance = 50000;
        }

        void display_account()
        {
            cout << "Account Name: " << account_name << endl;
            cout << "Account Number: " << account_number << endl;
            cout << "Account Balance: KSh " << balance << endl;
        }
};

class Debit: public Account
{
    public:
        void withdraw()
        {
            double amount = 5000;

            if (amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawal: KSh " << amount << endl;
                cout << "New Balance: KSh " << balance << endl;
            }
            else
            {
                cout << "Insufficient funds!" << endl;
            }
        }
};

class Credit: public Account
{
    public:
        void deposit()
        {
            double amount = 10000;

            balance += amount;

            cout << "Deposit: KSh " << amount << endl;
            cout << "New Balance: KSh " << balance << endl;
        }
};

int main()
{
    Debit debit_account;
    Credit credit_account;

    debit_account.set_account();

    cout << "DEBIT ACCOUNT" << endl;
    debit_account.display_account();
    debit_account.withdraw();

    cout << "\nCREDIT ACCOUNT" << endl;
    credit_account.set_account();
    credit_account.display_account();
    credit_account.deposit();

    return 0;
}
