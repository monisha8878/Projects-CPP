# include <iostream>
#include <climits>
using namespace std;
int main(){
    int length{1};
    int breadth{1};
    int area{ 1};

    // cout<<"enter the length\n";
    // cin>>length;
    // cout<<"enter the breadth\n";
    // cin>>breadth;
    // area=length*breadth;
    // cout<<"area of room is "<<area<<endl;



//  note these types are output in bytes.. for conversion in bits we can multiply them by 8 and get same result what we studied 
//sizeof outputs memory in bytes
    cout<<sizeof(length)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(long long )<<endl;
    cout<<sizeof(short )<<endl;
    cout<<sizeof(unsigned long  )<<endl;
    cout<<sizeof(unsigned short  )<<endl;
    cout<<sizeof(long double  )<<endl;
    cout<<INT16_MAX<<endl;
    cout<<LONG_LONG_MAX<<endl;

        
    
    


return 0;}




/*
local variables are declared inside main function,specific to a particular program
if variable declared outside the main function ---then compiler firdt looks locally then looks globally
*/


/*
Data types 


for char (single letter ) only put single quotes e.g.-{'a'} 
"a" is a string and cant be used with a char data type 


unsigned - mention
signed default -- in case of int 
short
int
long
long long 
   

for numbers very large we can use ticks 
eg 7'600'000'000---- for our understanding , compiler strips them 


{} list initialisation catches errors with d types
 sometimes it also causes overflow but still its better 
 = initialisation just causes overflows and does not catch errors nicely 




 long double - 2.7e+120
*/