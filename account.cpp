#include "account.h"
using namespace std;


// function declaration and definition for displaying accounts objects
void displayAccount(Account accountToDisplay){
        string acc_name;
    int depositAMount;
    int withrawAmount;

    // to get the different options from the user
    int option;

    cout << "Hi " << accountToDisplay.getName() << ", your account balance for account " << accountToDisplay.getAccountNUmber() << " as of today is: Kshs." << accountToDisplay.getBalance() << endl;
    // cout << "Hi " << account1.getName() << ", your account balance as of today is: Kshs." << account1.getBalance() << endl;

    cout << "What would you like to do today?" << endl << "1. Deposit" << endl << "2.Withdraw" << endl;
    cin >> option;

    switch (option)
    {
        // Option for deposit
    case 1:
        // Prompt and read name from user
        cout << endl << accountToDisplay.getName()  << " please enter the amount you wish to deposit:"<< endl;
        // getline(cin, acc_name);
        cin >> depositAMount;
        accountToDisplay.deposit(depositAMount);
        break;
    
    // Option for deposit
    case 2:
        // Prompt and read name from user
        cout << endl << accountToDisplay.getName()  << " please enter the amount you wish to withraw:"<< endl;
        // getline(cin, acc_name);
        cin >> withrawAmount;
        accountToDisplay.withraw(withrawAmount);
        break;
    
    default:
        cout << "Invalid option selected";
        break;
    }
}

int main() {
    // Initiliaze the object
    Account account{1234567, "Jane", "Doe", 20}; 
    Account account1{7654321, "Frank", "Castle", 1000};

    // call display account function for each object
    displayAccount(account);
    displayAccount(account1);

}

