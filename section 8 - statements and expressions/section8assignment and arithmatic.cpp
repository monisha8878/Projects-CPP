 # include <iostream>
using namespace std;
int main(){
// assignment operator...lhs=rhs...rhs is assigned to lhs ...assignment occurs when we changet he value of a variable, initialisation is the 1st value of that variable 
/* note in c++ 
assignment is like having labelled boxes . so int b = a means another labelled box is created storing same value as a..this is like a 
copy of a , if we change a it doesnt change b . this is different from python
 

*/



int  num1{0};

int num2{0};
// cout<< num1 << endl<<num2<<endl;
num1=7;
// cout<< num1 << endl<<num2<<endl;
num2=3;
// cout<< num1 << endl<<num2<<endl;
 float result= num1/num2;
 float result1=7.0f/3.0f;// here 7.0 and 3.0 are floats 
 float result2= 7/3.0; // here  3.0 is  double by default 
 float result3= 7.0/3;

 cout<<result1<<endl<<result2<<endl<< result3<<endl<< result<<endl ;




// ARITHMATIC OPERATORS 
/*
+
-
*
/  this gives integer division only if we use num1 and num2 as integers 



In C++, if both operands of a division are integers (e.g., 7 / 3), the division performed is integer division,
 which discards the decimal part and gives 2 instead of 2.33, even if the result is stored in a float or double. 
 To get a correct floating-point result like 2.33, at least one operand must be explicitly made a float or
  double using type casting (e.g., (float)7 / 3) or by writing it as a floating-point literal (e.g., 7.0 / 3 or 7 / 3.0). 
  This forces C++ to perform floating-point division instead of integer division.

int/int=int
int/float=float
float/int=float
float/float=float

%
not really anything like floor division 
but if we use int result = 7/3 then we get result =2 also for negaitve numbers int result = -7/3 does not give -3, it gives -2.
i,e it truncates closer  to 0 not to - infinity 
    



*/

return 0;}
