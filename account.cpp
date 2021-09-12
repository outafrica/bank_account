#include "account.h"
using namespace std;

int main() {
    // Initiliaze the object
    Account account{"Jane Doe", 20}; 
    Account account1{"Punisher", -30}; 

    string acc_name;
    int depositAMount;

    cout << "Hi " << account.getName() << ", your account balance as of today is: Kshs." << account.getBalance() << endl;
    cout << "Hi " << account1.getName() << ", your account balance as of today is: Kshs." << account1.getBalance() << endl;


    // Prompt and read name from user
    cout << endl << account.getName()  << " please enter the amount you wish to deposit:"<< endl;
    // getline(cin, acc_name);
    cin >> depositAMount;

    account.deposit(depositAMount);

    cout << endl << "Adding Kshs." << depositAMount << " to " << account.getName() << "'s account" << endl;
    cout << account.getName() << " your new acccount balance is Kshs." << account.getBalance() << endl;
    cout << account1.getName() << " your new acccount balance is Kshs." << account1.getBalance() << endl;



    // Prompt and read name from user
    cout << endl << account1.getName()  << " please enter the amount you wish to deposit:"<< endl;
    // getline(cin, acc_name);
    cin >> depositAMount;

    account1.deposit(depositAMount);

    cout << endl << "Adding Kshs." << depositAMount << " to " << account1.getName() << "'s account" << endl;
    cout << account1.getName() << " your new acccount balance is Kshs." << account1.getBalance() << endl;
    cout << account.getName() << " your new acccount balance is Kshs." << account.getBalance() << endl;



}