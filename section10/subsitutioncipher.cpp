 # include <iostream>
 #include <string>
using namespace std;
int main(){//subsitution cipher 
    string alphabet{" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{" zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKIHGFEDCBA"};
    cout<<"Enter your secret message:\n";
    string message{};
    getline(cin,message);
    size_t message_length{};
    
    message_length=message.length();
    size_t alphabet_length{};
    alphabet_length=alphabet.length();
    string secret= message;
     //string whitespace{" "};
    for (size_t i{}; i <message_length;i++){
        for (size_t n{};n< alphabet_length;n++){
            if (alphabet[n]==message[i]){
                secret[i]=key[n];
        //cout << "Matched '" << message[i] << "' at alphabet[" << n << "] -> '" << key[n] << "'\n";}
// else if (message[i]==whitespace){
//     hisecret[i]=' ';
// }
        // if match found then stop looping 

                        
            

        }
        
    }
}
cout<< "Your encrypted message is : "<< secret<<endl;
cout<< key[0]<<"A space "<< endl;
return 0;}
// doubts in the code 
//why does this not work? 
// i tried putting space in front of key and removing space from alphabet and key...both of them worked, but this isnt working why 
// when putting space at the back of the code , it didnt work 
