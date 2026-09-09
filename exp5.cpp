#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        }
        else if (amount > balance) {
            cout << "Insufficient balance.\n";
        }
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(101, 5000);

    account.display();

    account.deposit(2000);
    account.withdraw(1500);

    cout << "\nAfter transactions:\n";
    account.display();

    return 0;
}