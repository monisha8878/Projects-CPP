 # include <iostream>
 #include <vector>
using namespace std;


int main(){

    //endless for loop
    //for(;;){
     //   cout<<"Endless loop\n";
  //  }

  //comma operator in c++ for loop 



 /* 
 // simple printing nat no.s and their sum 
 
 int n{};
  int sum{};
  cout<<"Enter a number"<<endl;
  cin>>n;
  for (int i{1};i<=n;i++){
    cout<<"the "<<i<<" term is "<<i<<endl;
    sum=sum+i;
  }
  cout<<"the sum is " << sum<<endl;

*/ 

/* 
// finding perfect numbers ...numbers whose factors (excluding the no) ka sum= the number itself 
// eg 6=1+2+3


for( int i {1};i<=500;i++){
    
    int j{1};
    int sum{};
    for(j=1;j<i;j++){
        if(i%j==0){
        sum+=j;}

    }
    if (sum==i){
        cout<< i<<" is a perfect number"<<endl;
    }
}
*/ 




/*
// for loop with single statement and indentation 
 
for (int i {10}; i>0; i--)
    cout<<i<<endl;
    //cout<<"noice"<<endl; // note this is not part of for loop statement and executes correctly  but the indentation may mislead us ..hence its better to indent correctly 
cout<<"noice"<<endl; // correct indentation 

*/ 




//using comma operator 
for (int i {10},  j{1},  k{0 }; i>0; i--,j++,k+=2){
    cout << "i is "<<i<<endl;
    cout << "j is "<<j<<endl;
    cout << "k is "<<k<<endl;
    int sum {};
    sum = i+j+k;
    //cout <<( (sum>15)?(static_cast <string> (sum); ): "")<<endl;// wrong line as static cast cant convert int to string...as it is not directly convertible 
    cout <<( (sum>15)?(to_string(sum) ): "")<<endl;// use to_string instead for conversion, ternary operator takes the statement 1 and 2 having same types only 
}


// using a vector 

vector<int> nums {10,20,30,40,50};
for (int i{};i<nums.size();i++){ // here we are comparing signed i and unsigned nums.size()...so we can experience a warning 
    cout<<nums[i]<<endl;
}
return 0;}