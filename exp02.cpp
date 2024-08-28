#include <iostream>
#include <string>
using namespace std;

class BankAccount {

    string depositorName;
    int accountNumber;
    string accountType;
    float balance;

public:
  
    BankAccount(string name, int accNo, string accType, float Bal) {
        depositorName = name;
        accountNumber = accNo;
        accountType = accType;
        balance = Bal;
    }

    
    void deposit(){
        int daa;
        cout<<"ENter deposit amount:";
        cin>>daa;
        balance += daa;
        cout << "Amount deposited successfully. New balance: " << balance << endl;
    }

    
    void withdraw(){
        int waa;
        cout<<"enter withdraw amount:";
        cin>>waa;
        if(waa<=balance){
            balance-=waa;
            cout<<"your amount withdraw successfully";
            cout<<"\ncurrent balance is:"<<balance;
                
        }
        else{
            cout<<"your amount is more than initial balance,cannot withdraw:";
        }
    }

    
    void display() {
        cout << "\nDepositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    int accNo;
    char name[100], accType[100];
    float balance;
    cout<<"enter detils of account";
    cout<<"\n-----------------";
    cout<<"\nEnter a account number:";
    cin>>accNo;
    cout<<"\nEnter a name:";
    cin>>name;
    cout<<"\nEnter account type:";
    cin>>accType;
    cout<<"\nEnter a balance:";
    cin>>balance;

    BankAccount b1(name,accNo,accType, balance); 
    b1.deposit(); 
    b1.withdraw(); 
    b1.display(); 
    return 0;     
}
