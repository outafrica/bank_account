#include <iostream>
#include <string>

class Account {

    public:

        // initialize constructor with default variable name
        Account(string acc_name, int initialBalance)
        : accountName{acc_name} { //member initializer list

            // Validate the value for balance initialized
            if(initialBalance > 0 ) //check if vvalue entered is greater than 0
            {
                // if true assign value to balance
                balance = initialBalance;
            }

        }

        //perfom deposit action
        void deposit(int depositAmount) {
            
            if(depositAmount > 0) //check if amount being deposited is greater than 0
            {
                // sum the balance with the deposit amount to get the new balance
                balance = balance + depositAmount;
            }
        }
  
        //get users name
        string getName() const {
            return accountName;
        }

        //get user balance
        int getBalance() const {
            return balance;
        }

        //set name got from user
        void setName(string acc_name) {
            accountName = acc_name;
        }
    
    private:
        string accountName;
        int balance{0};

};