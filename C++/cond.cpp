#include <iostream>
using namespace std;
int sum=0;
int n=5;
int main(){
//  'for (int i=1;(i<=n );i++){
//     if (i %2!=0){
//         sum+=i;

//     }'

cout<<"YAY"<<endl;
bool isPrime=true;
cout<<"ENTER N:";
cin>> n;
for (int i=2;i<n;i++){
    if (n%i==0){
    isPrime=false;
    break;}

}   
if (isPrime==false){
    cout << n<<" is not a prime "<<endl;
}else{
    cout << n<<" is a prime "<<endl;

}   













    return 0 ;
}