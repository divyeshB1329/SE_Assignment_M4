// 4. Write a C++ program to implement a class called Bank Account that has
// private member variables for account number and balance. Include
// member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;

class Bank_Account {
private:
    int Account_number; // Private member variable for account number
    int balance;        // Private member variable for balance
    int dep;            // Private member variable for deposit amount
    int after_depo;     // Private member variable for balance after deposit
    int widro;          // Private member variable for withdrawal amount

public:
    // Constructor to initialize account details
    Bank_Account(int num, int balan, int depo, int wiro) {
        Account_number = num;
        balance = balan;
        dep = depo;
        widro = wiro;
    }

    // Function to print current balance
    void print() {
        cout << "\n ----Current balance----";
        cout << "\n Account number: " << Account_number;
        cout << "\n Balance: " << balance;
    }

    // Function to deposit money into the account
    void deposit() {
        cout << "\n Deposit = " << dep;
        after_depo = balance + dep;
        cout << "\n Balance (After deposit): " << after_depo;
    }

    // Function to withdraw money from the account
    void withdrawal() {
        cout << "\n Withdrawal = " << widro;
        cout << "\n Balance (After withdrawal): " << after_depo - widro;
    }
};

int main() {
    int n1, n2, n3, n4;

    // Input account details
    cout << "Enter Bank Account number: ";
    cin >> n1;
    cout << "Enter Bank Balance: ";
    cin >> n2;
    cout << "Enter deposit Amount: ";
    cin >> n3;
    cout << "Enter Withdrawal Amount: ";
    cin >> n4;

    // Create a Bank_Account object with the given details
    Bank_Account c(n1, n2, n3, n4);

    // Print current balance
    c.print();
    cout << "\n -------------------------------";

    // Deposit money and print balance after deposit
    c.deposit();
    cout << "\n -------------------------------";

    // Withdraw money and print balance after withdrawal
    c.withdrawal();

    return 0;
}
