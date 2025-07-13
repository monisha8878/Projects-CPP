 # include <iostream>
using namespace std;
int main(){
    // Aim - to assign a grade based on number (or gpa in the course)
    int gpa{};
    cout<< " enter your gpa for the course : " <<endl;
    cin>> gpa;
    switch (gpa)
    {
    case 10:
        /* code */
        cout<< " A grade"<<endl;
        break;
    case 9:
        cout<< " A- grade"<<endl;
        break;
    case 8: 
        cout<< " B grade"<<endl;
        break;
    case 7: 
        cout<< " B- grade"<<endl;
        break;
    
    case 6: 
        cout<< " C grade"<<endl;
        break;
    case 5: 
        cout<< " C- grade"<<endl;
        break;
    case 4: 
        cout<< "Fail"<<endl;
    
    
    default:
     cout<< "NA"<<endl;
        break;
        
    }
    







    








return 0;}