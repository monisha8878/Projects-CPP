#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> vec{};
cout <<" enter the vector"<<endl;
cin>>vec;// cant read vector this way wrong 
//---- WRITE YOUR CODE BELOW THIS LINE----
int i{};
int count{};
// operator order matters here ...pehle size check kro then check kro if 99 or not ....else pehle bina size check kiye 99 wala part check hua toh memory error aayega since out of bounds jaa chuka h 
    while ((i<vec.size) &&(vec[i]!=-99)  ){
        count+=1;
        
            i++;

    }


//---- WRITE YOUR CODE ABOVE THIS LINE----
//---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
return count;
}