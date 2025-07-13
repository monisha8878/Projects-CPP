 # include <iostream>
using namespace std;
int main(){
    cout<<"enter the number of cents you have \n";
    int cents{0},dollars{},quater{},dime{},nickel{},penny{};
    cin>>cents;
    dollars=cents/100;
    cents=cents%100;
    quater=cents/25;
    cents%=25;
    dime=cents/10;                                                                                                                                                           
    cents%=10;
    nickel=cents/5;
    cents%=5;
    penny=cents;
    cout<< "you have:\n "<< dollars<<" dollars\n"<<quater<<" quarters\n"<<dime<<" dimes\n"<<nickel<<" nickels\n"<<penny<<" pennies\n";


return 0;}