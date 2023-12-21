#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    static int nextAccountNumber;
    int accountNumber;
    string ownerName;
    double balance;

public:
    BankAccount(string owner, double initialAmount) {
        accountNumber = nextAccountNumber++;
        ownerName = owner;
        balance = initialAmount;
    }

    string getOwnerName() {
        return ownerName;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of $" << amount << " successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount. Amount must be greater than 0." << endl;
        }
    }
};

int BankAccount::nextAccountNumber = 251900;

int main() {
    BankAccount account1("John Doe", 1000.0);
    BankAccount account2("Jane Doe", 500.0);

    cout << "Account 1 - Owner: " << account1.getOwnerName() << ", Account Number: " << account1.getAccountNumber() << ", Balance: $" << account1.getBalance() << endl;
    cout << "Account 2 - Owner: " << account2.getOwnerName() << ", Account Number: " << account2.getAccountNumber() << ", Balance: $" << account2.getBalance() << endl;

    account1.deposit(200.0);
    
    account2.deposit(300.0);
    return 0;
}
