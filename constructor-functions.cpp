//Constructor Functions by u1tbmo
#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        Book(){
            title = "Missing Title";
            author = "Missing Author";
            pages = 0;
        }
        Book(string aTitle, string aAuthor, int aPages){ //This is a CONSTRUCTOR
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

class Inserter{ //Most useless class ever
    public:
        string insert;
        Inserter(string aInserter){
            insert = aInserter;
        }
};

int main(){
    Inserter space("\n");

    Book book1("The Song of Achilles", "Madeline Miller", 416);

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    
    cout << space.insert;

    Book book2("A Tour of C++","Bjarne Stroustrup",256);

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    cout << space.insert;

    Book nonexistent_book;

    cout << nonexistent_book.title << endl;
    cout << nonexistent_book.author << endl;
    cout << nonexistent_book.pages << endl;
    return 0;
}