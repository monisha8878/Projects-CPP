#include <iostream>
using namespace std;
int main(){
    cout<<"Welcome to Frank's Carpet Cleaning Service\n \nHow many small rooms would you like to have cleaned?\n ";
    int small{0};
    const  float p_small {25};
    const  float p_large {35};
    cin>>small;
    cout<<"How many large rooms would you like to have cleaned?\n";
    int large{0};
    cin>>large;
    cout <<endl;
    cout<<"Estimate for carpet cleaning service\nNumber of small rooms="<< small<<"\nNumber of large rooms="<<large<<"\nPrice per small room=$ "<<p_small<< "\nPrice per large room =$ "<<p_large <<endl;
    float cost{0};
    float tax{0};
    cost= p_large*large + p_small*small;
    tax=0.06*cost;
    cout<<"Cost="<<cost<<endl;
    cout<<"Tax="<<tax<<endl;
    const int days{30};
    cout<<"=======================================\nTotal estimate="<<cost+tax<<"\nThis estimate is valid for "<<days<<"days.";

return 0;}