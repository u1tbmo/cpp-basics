//Functions by u1tbmo
#include <iostream>
using namespace std;

void display_message(); //Declares function, although contents are below the main function.
void display_name(string user_name); //Declares function, although contents are below the main function.
void display_name_age(string user_name2, int user_age); //Declares function, although contents are below the main function.

int main(){
    cout << "Hello!" << endl;
    display_message();
    cout << "Hello again!" << endl;

    cout << "Hello again again!" << endl;
    display_name("random user");
    cout << "Hello again again again!" << endl;

    cout << "Hello again again again again!" << endl;
    display_name_age("other random user", 18);
    cout << "Hello again again again again again!" << endl;
    
    return 0;
}

void display_message(){
    cout << "This message is printed by the void function \"display_message\"" << endl;
}

void display_name(string user_name){
    cout << "Hello, " << user_name << "! This message is generated by the void function \"display_name\"" << endl; 
}

void display_name_age(string user_name2, int user_age){
    cout << "Hello, " << user_name2 << "! Your age is " << user_age << "! This message is generated by the void function \"display_name_age\"" << endl; 
}
