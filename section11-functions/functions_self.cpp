 # include <iostream>
using namespace std;
 void say_world () {
    cout << " World" << endl;
        }
    void say_hello () {
    cout << "Hello" << endl;
    say_world();
        }// in c++ cant define functions inside another functon

//void print_array( int arr[5]);
int main(){
   say_hello();
//    int my_numbers[5]{1,2,3,4,5};
//    print_array(my_numbers);
return 0;}
// void print_array( int arr[5]){

//     for (int i{};i<(arr.size());i++){// wrong...in a function array name decays to a pointer, it simply points to the address of array 
//         // need to pass size seprately
//         cout <<arr[i]<<endl;
//     }
// }