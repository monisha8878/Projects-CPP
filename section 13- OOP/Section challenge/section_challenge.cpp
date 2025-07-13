 # include <iostream>
 # include <iostream>
 #include <string>
 #include "movie.h"
 
 #include <vector>
 #include "movies.h"
 #include <map> 
 #include "movies.cpp"
using namespace std;
int main() {
    
        Movies::create_collection("my_movies");
    
        Movies  &collection_pointer=(*Movies::all_collections["my_movies"]);
    
        collection_pointer.display_collection("my_movies");

        collection_pointer.add_movie( "Big", "PG-13",2,"my_movies");                 // OK
        collection_pointer.add_movie("Star Wars", "PG",5,"my_movies");             // OK
        collection_pointer.add_movie("Cinderella", "PG",7,"my_movies");           // OK

        collection_pointer.display_collection("my_movies");   // Big, Star Wars, Cinderella

        collection_pointer.add_movie("Cinderella", "PG",7,"my_movies");            // Already exists
        collection_pointer.add_movie("Ice Age", "PG",12,"my_movies");              // OK

        collection_pointer.display_collection("my_movies");    // Big, Star Wars, Cinderella, Ice Age

        collection_pointer.increment_watch_count("Big","my_movies");                    // OK
        collection_pointer.increment_watch_count("Ice Age","my_movies");              // OK

        collection_pointer.display_collection("my_movies");    // Big and Ice Age watched count incremented by 1

        collection_pointer.increment_watch_count("XXX","my_movies");         // XXX not found

	return 0;
}

