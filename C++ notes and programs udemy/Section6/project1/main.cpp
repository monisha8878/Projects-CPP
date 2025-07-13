#include <iostream>

using namespace std;
// to find area of room in sq feet 
int main() {
    double length{0};
    cout<< "enter the length of room  : ";
    cin>> length;
    double breadth{0};
    cout<< "enter the breadth of room  : ";
    cin>> breadth;
     double area{0};
     area = length*breadth;
    cout<< "the area of room is :"<< area;
    return 0;
}