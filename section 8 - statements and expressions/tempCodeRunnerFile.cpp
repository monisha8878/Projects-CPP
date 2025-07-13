 # include <iostream>
using namespace std;
int main(){
// assignment operator...lhs=rhs...rhs is assigned to lhs ...assignment occurs when we changet he value of a variable, initialisation is the 1st value of that variable 
int num1{0};
int num2{0};
// cout<< num1 << endl<<num2<<endl;
num1=7;
// cout<< num1 << endl<<num2<<endl;
num2=3;
// cout<< num1 << endl<<num2<<endl;

 int result=-num1/num2;
 cout<<result<<endl;
/* note in c++ 
assignment is like having labelled boxes . so int b = a means another labelled box is created storing same value as a..this is like a 
copy of a , if we change a it doesnt change b . this is different from python 

*/



// ARITHMATIC OPERATORS 
/*
+
-
*
/ 
%
not really anything like floor division 
but if we use int result = 7/3 then we get result =2 also for negaitve numbers int result = -7/3 does not give -3, it gives -2.
i,e it truncates closer  to 0 not to - infinity 





*/

return 0;}
