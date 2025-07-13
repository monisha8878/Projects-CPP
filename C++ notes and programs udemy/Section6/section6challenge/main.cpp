#include <iostream>

using namespace std;

int main() {
    
    cout<< " Welcome to Franks carpet cleaning service"<< endl;
    cout<<endl;
    int num_small_rooms {0};
    cout << " Please enter the number of small rooms you would like cleaned- "<< endl;
    cin>> num_small_rooms;
        cout << " Please enter the number of large rooms you would like cleaned- "<< endl;
        int num_large_rooms {0};
    cin>> num_large_rooms;
    
    cout << " ESTIMATE FOR CARPET CLEANING SERVICE"<< endl;
    cout<< endl;
    cout << "=========================================="<< endl;
    
    
    cout << " Number of small rooms= "<< num_small_rooms << endl;
    cout<<" Number of large rooms= "<< num_large_rooms << endl;
   const float psmall =25;
    const float plarge=35;
 
    cout << " Price per small room = $"<< psmall << endl;
    cout << " Price per large room = $"<< plarge << endl;
    float total_cost = psmall*num_small_rooms+ plarge*num_large_rooms ;
    cout<< endl;
    cout<< "Total cost is= $"<< total_cost << endl;
     const float tax=0.06;
    float total_tax=tax*total_cost;
     cout<< endl;
    cout<< "Total tax is= $"<< total_tax << endl;
    float estimate=total_cost+total_tax;
    cout << endl;
    cout<<"======================================="<<endl;
    cout << " NET ESTIMATE IS= $"<< estimate;
    cout << endl;
    cout<<"======================================="<<endl;
     const int estimate_expiry= 30 ;
    cout << " Please note that this estimate is valid for " << estimate_expiry  <<" days only."<< endl;
    cout << endl;

    return 0;
}