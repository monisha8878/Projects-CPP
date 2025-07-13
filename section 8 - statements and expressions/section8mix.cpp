 # include <iostream>
using namespace std;
int main(){
    // Static type casting 
    // static_cast<type> (number)


    /*  aim : ask user to input 3 integers
    calculate sum and average of integers */
     /*int total{0};
     const int count{3};
     int num1{0},  num2{0},  num3{} ; // simple {} bracket also initialises to 0 , new way of declaring 3 vaiables in 1 line 
     //cout<< num1 << num2 << num3 <<endl;
     //cout<< " enter 3 integres sepreated by a  space\n";
     cin >> num1 >> num2 >>num3 ;
     total= num1+ num2+num3;

     double avg1{};
     double avg2{};
     double avg3{};
     avg1=  (total) /count; // here integer division is occuring so this is incorrect 
     avg2=  static_cast<double>(total) /count; //using static cast 
     avg3=  (double)total /count; //old c++ expression dont use this now 
     cout<< " the numbers were " << num1<< " "<< num2 <<" "<<num3<< endl;
     cout<< "total is " << total<<endl;
     cout<< "average is "<<avg1<<endl;
     cout<< "average is "<<avg2<<endl;
     cout<< "average is "<<avg3<<endl; */ 

// equality operators == , for precision we use speical libraries as built in doubles causes some errors...eg 12.0 and 11.9999999999999 is 
// conisdered same by computer 

cout<< boolalpha<<(10>20) <<endl;//boolalpha helps in printing true and false 
return 0;}