#pragma once
 # include <iostream>
using namespace std;




class Account 
{
    private:
    string name{"Account"}; 
    double balance{0.0}; 
    long long int *accountno{nullptr};
    static int num_accounts;// increment this in constructor only 
    //methods
    public:  
    bool deposit(double depos);
    bool withdraw(double);
   
    void set_name(string);
    void set_account_no(long long int acc_no);
    string  get_name() const ;
    int get_balance() const ;
    void display_Account(Account A) const ;
    static void display_active_accounts();
    static int get_num_accounts();
    
//    Account(string n);
//    Account(string n, double b);
//    Account();
   //single constructor for all 
  
  
  Account (string n ,double b, long long int acc_no);// the best way of writing a constructor ,simply use default parameters 
   Account(const Account &source); // Shallow copy constructor 
   ~Account();

};