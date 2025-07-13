# include <iostream>
 #include <string>
 #include "movie.h"

 #include <vector>
 #include "movies.h"
 #pragma once
using namespace std;
//add new movie
map<string, Movies*> Movies::all_collections;
void Movies::add_movie(string new_movie,string rating,int watch,string name){
    if (all_collections.find(name) == all_collections.end()) 
    {
    cout << "Collection '" << name << "' not found!" << endl<<"----------------------"<<endl;
    return;
    }
Movies &m = *all_collections[name];
bool movie_exists{false};
    for (const Movie &i:m.collection)
    {   if (i.movie_name==new_movie)
        {
            cout<<"This movie already Exists in this collection."<<endl;
            cout<<"You can enter another movie or change the rating or times watched of this movie. "<<endl<<"----------------------"<<endl;
            movie_exists=true;

        };

    };
    if(movie_exists==false)
    {
    Movie new_movie_object=Movie(new_movie,rating,watch);
    m.collection.push_back(new_movie_object);
    cout<<new_movie<<" has been added successfuly to "<<name<<" collection."<<endl<<"-----------------------------"<<endl;
    };
}


void Movies::increment_watch_count(string new_movie,string collectionname){ 

    bool movie_found{false};
    if (all_collections.find(collectionname) == all_collections.end()) {
    cout << "Collection not found!" << endl<<"----------------------------"<<endl;
    return;
}
    Movies &m= *all_collections[collectionname];
    for (Movie &i:m.collection){
        if (new_movie==i.movie_name){
            i.watched+=1;
            movie_found=true;
            cout<<"Incremented sucessfully. "<<endl<<"-------------------------"<<endl;

        };
        
    };
    if(movie_found==false)
    {
            cout<<"No such Movie exists in the collection"<<endl<<"--------------------------------------"<<endl;
    };
    
}

void Movies::display_collection(string name){
    if (all_collections.find(name) == all_collections.end())
    {
    cout << "Collection not found!" << endl;
    return;//ensures ki aage badhega hi nhi program 
    }
    
    Movies &m=*all_collections[name];
    cout<<"Collection Name: "<<m.collection_name<<endl;
    for (Movie &i:m.collection)
    {
        cout<<"Movie Name: "<<i.movie_name<< " ||Rating: "<<i.movie_rating<< " ||Times watched: "<<i.watched<<endl;
        
    }
    cout<<"------------------------------"<<endl;
};
void Movies::create_collection (string name){
    Movies* new_collection = new Movies(name);             //  dynamically allocate
    all_collections[name]=new_collection;//both pointers point to same object. 

 }


//constructor 
Movies::Movies (string name="Movies"): collection_name{name}
{  
cout<<"A new movie collection "<<name<<" has been created. Add your favourite movies to this"<<endl<<"-------------------"<<endl;
};
//destructor 
Movies::~Movies()
{ 
};
