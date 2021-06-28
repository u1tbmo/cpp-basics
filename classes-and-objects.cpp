//Classes and Objects by u1tbmo
#include <iostream>
using namespace std;

class Book{ //Book is a user-defined data type, which is a CLASS
    public:
        string title;
        string author;
        int pages;
};

class Spacer{ //Most useless class ever
    public:
        string space = "\n";
};

int main(){
    Book book1; //This is an instance of the class 'Book', which is an OBJECT
    book1.title = "The Song of Achilles";
    book1.author = "Madeline Miller";
    book1.pages = 416;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    Spacer literal_space;
    cout << literal_space.space; //Adds a space.

    Book book2;
    book2.title = "A Tour of C++";
    book2.author = "Bjarne Stroustrup";
    book2.pages = 256;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}