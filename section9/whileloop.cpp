 # include <iostream>
using namespace std;
int main(){
   /*  int num{};
    cout<<"start the countdown by entering a number\n";

    cin>>num;
    while (num<=0)
    {
        
       cout<< "Enter a positive number\n ";
       cin>>num;
    }// this is a input validation
  */ 


    bool input{false};
    int num{};
    while (!input)
    {
         cout<<"start the countdown by entering a number\n";
         cin>>num;
         if(num>0){
         input=true;
         }
         else{
            cout<< "enter a valid number\n";
         }
    }
    // better input validation 
    
    while (num>0)
    {
        /*code */
        cout<<num<<endl;
        --num;
    }
    cout<<"blastoff!!!!\n";
    cout<<"start the countdown by entering a number\n";
    cin>>num;
    for (;num>0;--num){
        cout<<num<<endl;
    }
    cout<<"blastoff\n";
return 0;}
