 # include <iostream>
using namespace std;
int main(){
    int *p;
    cout<<" value of p is "<< p<<endl;
    cout<<" address of p is "<< &p<<endl;
    cout<<" size of p is "<< sizeof p<<endl;
    p=nullptr;
    cout<<" value of p is "<<  p<<endl;
    int *int_ptr{nullptr};
    int_ptr= new int ;
    cout<< int_ptr<<endl;
    *int_ptr=5;
    delete int_ptr;
    
return 0;}