/*
2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include<iostream>
using namespace std;

class bank_account {
private:
    string Name_of_the_depositor;
    int Account_Number;
    string Type_of_Account;
    int Balance_amount_in_the_account;
    int bal_after_deposit;
    int balance_after_withdraw;

public:
    // Assign values to the bank account details
    void assign_values() {
        Name_of_the_depositor = "Bhambhana Divyesh";
        cout << "\n\n\t Name : " << Name_of_the_depositor;
        Account_Number = 13291329;
        cout << "\n\n\t A/C number : " << Account_Number;
        Type_of_Account = "saving";
        cout << "\n\n\t Account type : " << Type_of_Account;
        Balance_amount_in_the_account = 100;
        cout << "\n\n\t A/C balance : " << Balance_amount_in_the_account;
    }

    // Deposit an amount into the account
    void deposited_an_amount() {
        int deposit = 50;
        bal_after_deposit = Balance_amount_in_the_account + deposit;
        cout << "\n\n\t Deposit successful : 50 . New balance: " << bal_after_deposit;
    }

    // Withdraw an amount after checking balance
    void withdraw_an_amount_after_checking_balance() {
        int widro = 100;
        balance_after_withdraw = bal_after_deposit - widro;
        cout << "\n\n\t Withdraw successful : 100 . New balance: " << balance_after_withdraw;
    }

    // Display the name and balance of the depositor
    void display_name_and_balance() {
        cout << "\n\n\t Name : " << Name_of_the_depositor << " \n\t Balance : " << balance_after_withdraw;
    }
};

int main() {
    bank_account bank;
    
    // Assign values to the account
    bank.assign_values();
    cout << "\n----------------------------------------------------------------------------";
    
    // Deposit an amount
    bank.deposited_an_amount();
    cout << "\n----------------------------------------------------------------------------";
    
    // Withdraw an amount
    bank.withdraw_an_amount_after_checking_balance();
    cout << "\n----------------------------------------------------------------------------";
    
    // Display the name and balance
    bank.display_name_and_balance();

    return 0;
}

