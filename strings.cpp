//Strings by u1tbmo
#include <iostream>
#include <string>
using namespace std;

int main(){
    string hello_var = "Hello from a variable!";

    cout << "Hello!" << endl; //Use endl to end the line
    cout << "Hello again!\n"; //Use \n to also end the line
    cout << hello_var << endl; //Use variables to store string values
    cout << hello_var.length() << endl; //Use the length() function to find the number of characters in a variable.
    cout << hello_var[0] << endl; //Use [x] to refer to characters and index positions
    cout << hello_var.find("Hello", 0) << endl; //Use find("x", y) to find strings or characters
    cout << hello_var.substr(0,5) << endl; //Use substr(x,y) to take part of the string
    
    return 0;
}