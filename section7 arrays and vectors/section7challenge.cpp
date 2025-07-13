#  include <vector>  
# include <iostream>
using namespace std;
int main(){
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<vector1.at(0)<<endl<<vector1.at(1)<<endl;
    cout<<vector2.at(0)<<endl<<vector2.at(1)<<endl;
    cout<<vector1.size()<<endl<<vector2.size()<<endl;

    vector <vector<int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    cout<<vector2d.at(0).at(0)<<endl<<vector2d.at(1).at(1)<<endl;
    vector1.at(0)=1000;
    cout<<vector1.at(0)<<endl;
    cout<<vector2d.at(0).at(0)<<endl<<vector2d.at(1).at(1)<<endl; // note that the 2d vector does not change ....because when we do . at , we actually make a copy then add it 
return 0;}