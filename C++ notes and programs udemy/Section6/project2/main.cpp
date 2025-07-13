#include <iostream>

using namespace std;

int main() {
    int  num_of_rooms {0};
    cout<< "Hello, Welcome to Franks cleaning service ,\n";
    cout<< " Please enter the number rooms to be cleaned : ";
     cout<<endl;
    cin >> num_of_rooms;
    
    
    cout<<" ESTIMATE FOR NUMBER OF ROOMS: \n";
    cout<<endl;

    cout<< " The number of rooms are = "<<num_of_rooms << endl;
    
    
    int price_per_room = 31;
    float tax_rate =0.06;
    
    
    cout<< " The price per room = Rs "<<price_per_room << endl;
    
    cout<<"Cost= Rs "<<price_per_room*num_of_rooms << endl;
    
    int cost=price_per_room*num_of_rooms;
    float tax = price_per_room*num_of_rooms*tax_rate ;
    
    
    cout<< "Tax = Rs "<< tax << endl;
    cout << "Total estimate is =Rs "<< cost+tax << endl;
     cout<<endl;
    cout<< " This estimate is valid for 30 days .";
     cout<<endl;
     return 0;
}