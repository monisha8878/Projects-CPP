// Section 6
// Global and local variables 

#include <iostream>
 
using namespace std;

int age {18}; // Global variable, accesed from any part of program 
 
int main() {
    
   int age {16};    // local variable
    
    cout << age <<  endl;
    
    return 0;
}

