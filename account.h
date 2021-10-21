#include <iostream>
#include <string>

class Account {

    public:

        // initialize constructor with default variable name
        Account(unsigned int account_number, std::string fName, std::string lName, int initialBalance)
        : accountNumber{account_number}, accountName{fName + " " + lName} { //member initializer list

            // Validate the value for balance initialized
            if(initialBalance > 0 ) //check if vvalue entered is greater than 0
            {
                // if true assign value to balance
                balance = initialBalance;
            }

        }
  
        // get account number
        unsigned int getAccountNUmber() const {
            return accountNumber;
        }
        //get users name
        std::string getName() const {
            return accountName;
        }

        //get user balance
        int getBalance() const {
            return balance;
        }

        //set accountnumber got from user
        void setAccountNumber(unsigned int acc_number) {
            accountNumber = acc_number;
        }

        //set name got from user
        void setName(std::string acc_name) {
            accountName = acc_name;
        }

         //perfom deposit action
        void deposit(int depositAmount) {
            
            if(depositAmount > 0) //check if amount being deposited is greater than 0
            {
                // sum the balance with the deposit amount to get the new balance
                balance = balance + depositAmount;
                std::cout << std::endl << "Amount of Kshs." << depositAmount << " successfully deposited to " << getName() << "'s account" << std::endl;
                std::cout << getName() << " your new account balance is Kshs." << getBalance() << std::endl;

            }else{
                std::cout << "Invalid amount selected"; 
            }
        }

        // function to facilitate money withdrawal 
        void withraw(int withdrawAmount){

            if(withdrawAmount > balance) //check if amount being withdrawn is greater than balance
            {
                // Display relevant message to this regard
                std::cout << "Withrawal amount exceeds account balance";
   
            }else{
                
                balance = balance - withdrawAmount;

                std::cout << "Withdrawal of amount: Kshs." << withdrawAmount << " successful" << std::endl << "New Balance is: Kshs." << balance << std::endl;
   
            }

        }
    
    private:
        std::string fisrtName;
        std::string lastName;
        unsigned int accountNumber;
        std::string accountName;
        double balance{0.00};

};
