// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/


 # include <iostream>
 #include <vector>
 #include <algorithm> // for std::sort
using namespace std;
int main(){

// construct the menu 
char choice{};
vector<int> list {1,2,3};
int valid{};// to stop an infinite menu, just accept till 15 consecutive wrong inputs
do

{
    //display the menu all the time except break 
    cout<<"------------------------------------------------------------\n";
    cout<<"Menu Options\n"<<"P - Print Numbers\n"<< "A - Add a number\n"<<"M - Display mean of the numbers\n";
    cout<<"S - Display the smallest number\n"<<"L - Display the largest number\n"<<"Q - Quit"<<endl;
    //choice store 
    cout<< " Enter Your Choice:\n";
    
    cin>>choice;
    vector <char>  acceptable_choices{'p','P','a','A','M','m','S','s','L','l','Q','q'};
    int i{};
    //input validation 
    while (i<acceptable_choices.size()&&choice!=acceptable_choices[i])
    {
        i+=1;
        
        /* code */
        if (i==acceptable_choices.size())
        {
            cout<<"---------------------------------------\n";

            cout<<"Unknown selection, please try again\n";
            cout<<"No. of attempts left for correct choice : "<<20-valid<<endl;
            cout<<"Menu Options\n"<<"P - Print Numbers\n"<< "A - Add a number\n"<<"M - Display mean of the numbers\n"
            <<"S - Display the smallest number\n"<<"L - Display the largest number\n"<<"Q - Quit"<<endl;
            cout<< " Enter Your Choice:\n";
            
            cin>>choice;
            i=0;
            valid+=1;
            
            
        } ;
        

}
    switch (choice)
{
    case 'P':
    case 'p':
        if (list.size()==0)
        {
            cout<<"[] - the list is empty\n";
        }
        else
        {   cout<<"[ ";
            for (auto i:list){
                cout<<i<<" ";
            }
            cout<<"] \n";

        }
        break;
    case 'A':
    case 'a':{

        cout<<"Enter the integer you want to add in the list\n";
        int new_entry{};
        cin>>new_entry;
        list.push_back(new_entry);
        cout<<new_entry<<" added\n";
        


        break;
        
        // here may encounter a jump to case cross initialisation error...hence perfectly enclose in blocks..read more abt this error from chatgpt 
    } 
    case 'M':
    case 'm':
        if (list.size()==0)
        {
            cout<<"The list is empty. Unable to calculate mean.\n";
        }
        else
        {
            int sum{};
            float mean{};

            for (auto j :list)
            {
                sum+=j;
            }
            mean=sum/(list.size());
            cout<< "The mean is: "<<mean<<endl;
        }
        
       
        break;

    case 'S':
    case 's':
        if (list.size()==0)
        {
            cout<<"The list is empty. Unable to display smallest number.\n";
        }
        else
        {
             sort(list.begin(), list.end()); // Ascending order sorting 
             cout<<"The smallest number is: "<<list[0]<<endl;
        }

        
        break;
    case 'L':
    case 'l':
        if (list.size()==0)
        {
            cout<<"The list is empty. Unable to display largest number.\n";
        }
        else
        {
             sort(list.begin(), list.end()); // Ascending order sorting 
             cout<<"The largest number is: "<<list.back()<<endl;// no cant use list[-1] it tries to search for memory before 1st elemt,,out of bounds
        }
        
        break;
    case 'Q':
    case 'q':

        cout<<"Goodbye!\n" ;
        break;


// default:
//     break;
}   
} while (choice!='q'&& choice!='Q'&& valid<=20);
cout<<"More than 20 invalid inputs. \nHence the application is quitting.\n Please reopen if you want to re-enter a choice \n";




return 0;}