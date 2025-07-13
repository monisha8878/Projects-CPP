 # include <iostream>
using namespace std;
int main(){
 /*
    //syntax for array 
    int test_scores[5] {1,0}; //here 1 value is 1, one is 0 and rest others are automatically 0  
    //int test_scores[5]  declared but not initialised- garbage values 
    cout<<"hi"<<test_scores[2]<<endl;
    cout<<test_scores<<endl;
    cin>> test_scores[2];
    cout<<test_scores[2]<<endl;
    // different from constants-  const int test_socre{5}; and variable-- int  tes_score{5};
    string vowels[4]{"a","e","i","o"};
    cout<<vowels[0]<<endl;
    cout<<vowels<<endl; // this is the memory location of this array 

    */ 




    //Multi dimensional array 
    const int rows{3};
    const int cols{4};
    int movie[rows][cols];

    cout<<movie[2][1]<<endl; // no initialisation but garbage values 




return 0;}


