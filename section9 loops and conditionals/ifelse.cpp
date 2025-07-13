 # include <iostream>
using namespace std;
int main(){
    cout<<"enter a value of x"<<endl;
    int x{};
    cin>>x;
    if (x==10){
        cout<<"yes"<<endl;
    }
     else if (x<10||(x>11&&x<15)){
        cout<<"maybe"<<endl;// if we simply use if here then it pairs only with second if and not with 1st if 
        // in c++ else belongs to the closest if 
    }
    else{
    cout<<"no"<<endl;
}
return 0;}