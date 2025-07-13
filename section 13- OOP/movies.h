 # include <iostream>
 #include <string>
 #include "movie.h"
 #include "movie.cpp"
 #include <map>
 #include <vector>
 #pragma once
using namespace std;
class Movies{
    private:
    string collection_name;
    vector <Movie> collection;

    public:
    
    static map<string,Movies*> all_collections;
    void add_movie(string new_movie,string rating,int watch,string name);
    static void create_collection (string name);

    void increment_watch_count(string new_movie,string collectionname);
    void display_collection(string name);
    Movies (string name);
   // constructor 
    ~Movies();//destructor

};
