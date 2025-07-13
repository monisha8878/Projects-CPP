 # include <iostream>
 # include <string>

using namespace std;
int main(){
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6{s1,0,3};
    string s7(10,'X');
    
    cout<<s0<<endl;
    cout<<s0.length()<<endl;
    cout<<boolalpha;// just writing this once will convert all bool output to true /false 
    cout<<s1<<"=="<<s5<<"  "<<(   s1==s5)<<endl;
    s2[0]='l';
    cout<<s2<<endl;
    s2.at(0)='P';
    cout<<s2<<endl;
    s4= s1 + " and " + s3;
    cout<<s4<<endl;
    // s7= "pen"+ " pineapple" + s1; // compiler error as here 2 c style string 
    s7= s1+" pen"+ " pineapple" ; // no compiler error?  as pehle convers s1 +pen to c++ style string and then adds pineapple to the new string
    cout<<s7<<endl;




return 0;}