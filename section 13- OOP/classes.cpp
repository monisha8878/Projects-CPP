 # include <iostream>
 # include <string> 
 # include <vector>
 #include "account.h"
 #include "account.cpp"
using namespace std;

//define classes outside main so thats its in gloabal scope 




   int main(){
  
  


   //-------------------------------------------------------------------------------------------------------//
    Account monisha;// by default empty constructor 
    monisha.set_name("Monisha");
    monisha.set_account_no(231220056789);
    monisha.deposit(12000);
    monisha.withdraw(3000); 
    
    {
        Account harry("Harry",10);
        cout<<harry.get_name()<<endl;
       harry.display_Account( harry);
       Account::display_active_accounts();  

    }
    
    
        //Account new_account{monisha};
        monisha.display_Account(monisha);
        Account::display_active_accounts();
        Account new_account{monisha};
        new_account.set_name("NEW ACCOUNT");
        Account::display_active_accounts();
        monisha.set_name("cutie");
        monisha.set_account_no(1000230456);
        monisha.display_Account(monisha);
        new_account.display_Account(new_account);
        const Account hermione("Hermione",20000,200456780909);
        hermione.display_Account(hermione);
        Account::display_active_accounts();
    

  

return 0;}