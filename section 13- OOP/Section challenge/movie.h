 # include <iostream>
 #include <string>
 #pragma once 
using namespace std;
class Movies;//forward declaration
class Movie

{
    private: 
        string movie_name{"None"};
        string movie_rating{"NA"};
        int watched{0};
        friend class Movies ;
    public: 
        
    Movie (string new_movie="None",string movie_rating="NA",int watched=0): movie_name{new_movie}, movie_rating{movie_rating}, watched{watched}
    {

    };
    ~Movie()
    {

    };
    



} ;
