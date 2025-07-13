# include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <char> vowels  {'a','e','i','o','u'};// here dont specify size just directly write the elements 
    vector <int> test_scores (10);  //automatically intgers initialised to 0
    vector <double> temp (365,80.00); // creates a vector of size 365 and initialise all to 80.0s
//     cout<<temp[0]<<endl; // array syntax 
//     cout<< vowels.at(2)<<endl; // vector_name.at(element index)
//     vowels.at(0)='A';
//     cout<<vowels.at(0)<<endl;
//     cin>>temp.at(5);
//     cout<<temp.at(5)<<endl;
//     vowels.push_back('y'); //vector_name.push_back(element)
//     cout<<vowels.at(5)<<endl; 
//     cout<<vowels.size()<<endl;

//2 D vector
vector <vector<int>> movie 
{
    {1,2,3,4},
    {5,6,7,8,},
    {9,10,11,12}


};
cout<<movie.at(0).at(1)<<endl;



return 0;}