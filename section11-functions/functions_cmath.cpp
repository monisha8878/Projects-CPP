 # include <iostream>
 #include <cmath>
using namespace std;
int main(){
    int number{};
    float power{};
    cout<<"enter a number: "<<endl;
    cin>>number;
    cout<< sqrt(number)<<endl;
    cout<<cbrt(number)<<endl;
    cout<<sin(number)<<endl;
    cout<<cos(number)<<endl;
     cout<<" enter a power to raise the number to : \n" ;
     cin>>power;
     cout<<pow(number,power)<<endl;
return 0;}