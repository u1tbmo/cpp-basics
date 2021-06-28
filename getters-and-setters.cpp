//Getters and Setters by u1tbmo
#include <iostream>
using namespace std;

class Film{
    private:
        string rating;
    public:
        string title;
        string director;
        
        Film(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            set_rating(aRating);
        }

        void set_rating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }
            else{
                rating = "NR";
            }
        }

        string get_rating(){
            return rating;
        }
};

int main(){
    Film avengers_endgame("Avengers: Endgame", "Joe Russo, Anthony Russo", "PG-13"); //Try changing the value to be inputted to the aRating parameter.

    cout << "Title: " << avengers_endgame.title << endl;
    cout << "Director/s: " << avengers_endgame.director << endl;
    cout << "Age Rating: " << avengers_endgame.get_rating() << endl;
    cout << endl;

    return 0;
}