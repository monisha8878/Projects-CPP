// Section 12
// Challenge

/* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
  dynamically allocates a new array of integers whose size is the product of the 2 array sizes
  
  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
  
  You can also write a print function that expects a pointer to an array of integers and its size and display the
  elements in the array.
    
  For example,
  
  Below is the output from the following code which would be in main:
  
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,5);
    
    cout << "Array 2: " ;
    print(array2,3);
    
    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: " ;
    print(results,15);
   
   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/
  
#include <iostream>
#include <string>

using namespace std;
//void apply_all (int array1[],int array1_size{},int array2[],int array2_size{})// invalid to initialise int variables here 
 int * apply_all (int array1[],int array1_size,int array2[],int array2_size)// invalid to initialise int variables here 
{ 
  int result_size= array1_size*array2_size;
  //int result[result_size]{};// dont use local array here as by using return it gets destroyed
  int *result= new int[result_size];
  int *temp1{array1};
  int *temp2{array2};
  for (int j{};j<array1_size;j++)
  {
    temp1=&(array1[j]);

    for (int i{};i<array2_size;i++)
    {
      temp2=&(array2[i]);
      
      result[i*array1_size+j]=*temp1 * *temp2;
      
      



    }

  }
  return result;

  
} 

// NOTE 


//STACK MEMORY GETS DESTROYED WHEN THE FUNCTION ENDS, HOWEVER DYANAMIC MEMORY PERSISTS UNTIL WE EXPLICITELY DELETE IT 
//...HENCE WE USE DYANAMIC MEMORY IN SUCH KINDS OF FUNCTIONS 
// BELOW IS ANOTHER COMMON MISTAKE OF WRITING THE FUNCTION AND ITS CONSEQUENCES DONT UNCOMMENT IT 

void print( int array[],int array_size)
{
  string answer="[";
  for (int i {};i<array_size;i++)
  { 
    answer+= " ";
    answer+= to_string(array[i]);
  }
  answer+= " ]";
  cout<<answer<<endl;




}



/* 
WRONG METHOD 


int * apply_all (int array1[]=nullptr,int array1_size=0,int array2[]=nullptr,int array2_size=0)// invalid to initialise int variables here 
{ 
  int result_size= array1_size*array2_size;
  int result[result_size]{};// HERE WE ARE CREATING A LOCAL ARRAY ON STACK WHICH DESTROYS WHEN THE FUNCTION CALLS 
  int *temp1{array1};
  int *temp2{array2};
  for (int j{};j<array1_size;j++)
  {
    temp1=&(array1[j]);

    for (int i{};i<array2_size;i++)
    {
      temp2=&(array2[i]);
      
      result[i*array1_size+j]=*temp1 * *temp2;
      
      
     



    }

  }
  int *answer{result};// POINTER WILL POINT TO RANDOM VALUE WHEN THE RESULT IS DESTROYED,, HENCE GARBAGE VA;UES ARE OUTPUTTED ON USING THIS FUNCTION 
   return answer;
} */ 





int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    delete results;// MEMORY DELETED , NO LEAK 
    cout << endl;

    return 0;
}

