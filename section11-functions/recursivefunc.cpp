#include <iostream>
#include <string>
using namespace std;
int sum_of_digits(int n) {
    // Write your code below this line
    string number=to_string (n);
    if (number.size()==1)
        {
          return number[0] -'0';
        }
    
    int last_digit = number.back()-'0';// uses ascii numbering to find the last digit 
    number.pop_back();
    string helper=number;
    int new_num= stoi(helper);// helps in converting string to int , stoi cant convert if length is empty hence we use number size==1 as base case to be safe 
    
    int ans= (last_digit)+ sum_of_digits(new_num);
    return ans ;
        
    }
    int main (){
        int n{};
        cout<< " enter a number\n";
        cin>>n;
        cout<< " the sum of digits of number is : "<< sum_of_digits(n);

    }
    
    
    
// int sum_of_digits(int n){
//     if (n==0){
//         return 0;
//     }
//     int ans= n%10 + sum_of_digits(n/10);
//     return ans ;
// }
    
    // Write your code above this line
