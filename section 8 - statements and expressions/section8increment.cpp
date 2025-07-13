 # include <iostream>
using namespace std;
int main(){
    // CASE 1 
   // #increment and decrement operator never overuse this and definitely not twice in the same line 
   // increment = ++ 
   // decrement = -- both work in same way here we deal with increment 
   int counter{10};
   int result {0};
//    cout<<"counter is " << counter<<endl;
//    counter=counter+1;
//       cout<<"counter is " << counter<<endl;
//       counter++; //preincrement 
//       cout<<"counter is " << counter<<endl;
//       ++counter;// postincrement 
//       cout<<"counter is " << counter<<endl;
      // note in this case both preincrement and postincrement act the same , change the operand 

// case 2 
counter=10;
result=0;
// cout<<"counter is " << counter<<endl;
// result=++counter; // counter is incremented 1st and then stored in result 
// cout<<"counter is " << counter<< " result is " << result<<endl;
// result=counter++; // note here result is just sotred 1st as counter,
//then counter is incremented  so one memory location has result labelled as 11 ,
//  another location has counter labelled as 12 

cout<<"counter is " << counter<< " result is " << result << endl;
counter=10; result=0;
result=  10 + counter++; // 1st result is calculated then post increment is done 
cout<<"counter is " << counter<< " result is " << result << endl;


counter=10; result=0;
result= counter++ + 10 ; // in post increment just calculate by removing the operator, then just change the counter value 
cout<<"counter is " << counter<< " result is " << result << endl;


counter=10; result=0;
result=  10 +  ++counter;  
cout<<"counter is " << counter<< " result is " << result << endl; // in preincrement just change the counter 1st then use the modified counter in result 


counter=10; result=0;
result=    ++counter +10;  
cout<<"counter is " << counter<< " result is " << result << endl;

return 0;}
