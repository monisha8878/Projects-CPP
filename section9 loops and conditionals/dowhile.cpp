 # include <iostream>
using namespace std;
int main(){
// menu driven application 
char selection ;
    
 do {
cout<< "1:  DO this"<<endl;
cout<< "2:  DO That"<<endl;
cout<< "3:  DO this and that"<<endl;
cout<< "Q:  Quit"<<endl;
cout<<"enter selection"<<endl;
cin>> (selection);

 switch (selection)
 {
 case '1': cout<<"DO THIS"<<endl;
    /* code */
    break;
case '2':  cout<<"DO THAT"<<endl;
    break;
case '3' : cout<<"DO 3rd thing"<<endl;
    break;
case 'Q':
case 'q': cout<<"Quit"<<endl; break;
 default:
    cout<<"Unknown selection"<<endl;
 }


 }while (selection!='Q'&&selection!='q');



return 0;}

// q 2 
