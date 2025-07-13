 # include <iostream>
 #include <vector>
using namespace std;
int main(){
   vector < int> scores{10,20,30,40,50};
   for (auto x: scores )// auto is a keyword in c++ that automatically deduces type of vector 
   // this is a range based for loop ....it iterates over vector scores using the variable x 
   cout<<x<<endl;


   for (auto c: " this is a string"){
    cout<< c<<endl;
   }

   for (auto c: " this is a string"){
    if (c==' '){ // in double quotes its a const char 
        //" " is a C-string literal (const char*)
      // c is a char, since you're iterating over a string one character at a time. we have to use '' 
        cout<<"\t";
    }
    else {cout<< c;}
   }

return 0;}