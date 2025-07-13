# include <iostream>
#include "account.h"
#include <string>
# pragma once


using namespace std;
int Account::num_accounts=0;
void Account::set_name(string new_name)
{
        name=new_name;
        cout<<"The name has been set to "<<new_name<<"."<<endl;
};

void Account::set_account_no(long long int acc_no)
{

      *accountno= acc_no;
       cout<<"The account number  has been set to "<<*accountno<<"."<<endl;
};
string Account:: get_name() const
{
    return name;
};
int Account::get_balance() const 
{
    return balance;
}
bool Account::withdraw(double withdrawal)
{
        cout<<name<<" has withdrawed "<<withdrawal<<" rupees only."<<endl;
        balance=balance-withdrawal;
         cout<<"Balance = "<<balance<<endl;
        cout<<"Withdraw Successful\n";
        return true; 
    
};
bool Account::deposit(double depos)
{
    balance=balance+depos;
    cout<<name<<" has deposited "<<depos<<" rupees only."<<endl;
    cout<<"Balance = "<<balance<<endl;
    cout<<"Deposit Successful\n";
    return true;

};
void Account::display_active_accounts(){
        cout<<"Active Accounts: "<<endl;
        cout<<Account::get_num_accounts()<<endl;//use parenthesis...agar nhi use kia toh address return hoga function ka 
    };
void Account::display_Account(Account A) const {
        cout<<"Name: "<<A.name<<endl;
        cout<< "Balance: "<<A.balance<<endl;
        cout<<"Account no. : "<<*A.accountno<<endl;
    };
 int Account::get_num_accounts(){
    return Account::num_accounts;
};


    // Account::Account(string n): Account(n,0.0)
    // {
    //      cout<<"string arg constructor called"<<endl;
    // };
    // Account::Account(string n ,double b):name(n),balance(b) {//delegating constructor //can also use name{n},balance{b} jere
        
    //     cout<<"all args constructor called "<<endl;
    // };
    // Account::Account(): Account("account",0.0)
    //     {
    //     cout<<"no arg constructor called"<<endl;
    // };
Account::~Account(){
    delete accountno;
 --num_accounts;
        //cout<<"Destructor called for "<<name<<endl;
    };
// even better way of calling constructor 
Account :: Account (string n="None" ,double b=0.0,long long int acc_no=0 ): name{n},balance{b} 
{
    accountno=new long long int;
    *accountno=acc_no;
    num_accounts++;
//cout << "Constructor for " << name << ", account no: " << *accountno << endl;
};

//Shallow copy constructor (on implementing this program will crash for sure )
    // Account::Account(const Account &source):  Account(source.name,source.balance,source.accountno) /*name(source.name) ,balance{source.balance}or use delegaton*/
    // {
    //     cout<<" Shallow copy constructor made a copy of "<<source.name<<"shared account no. : "<<*accountno<<endl;
    // };


//Deep copy constructor 
Account::Account(const Account &source):Account(source.name,source.balance) /*name(source.name) ,balance{source.balance}or use delegaton*/
    {   accountno=new long long int;
        *accountno=*source.accountno;
       // cout<<"Deep copy constructor made a copy of "<<source.name<<" having same account no. : "<<*accountno<<endl;
    };
