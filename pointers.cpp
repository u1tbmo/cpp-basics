//Pointers by u1tbmo
#include <iostream>
using namespace std;

int main(){
    int integer = 16;
    double pi = 3.14;
    string text = "text";
    
    //Memory Addresses
    cout << "PRINT THE MEMORY ADDRESSES OF THE VARIABLE VALUES" << endl;

    cout << &integer << endl; // Print the memory address.
    cout << &pi << endl; // Print the memory address.
    cout << &text << endl; // Print the memory address.

    //Variables and Memory Addresses
    cout << "PRINT CORRESPONDING VARIABLE NAME AND THEIR MEMORY ADDRESS" << endl;

    cout << "Integer: " << &integer << endl; // Print the variable name and memory address.
    cout << "Pi: " << &pi << endl; // Print the variable name and memory address.
    cout << "Text: " << &text << endl; // Print the variable name and memory address.

    //Creating Pointers
    int* pInteger = &integer; //Store the memory address of the variable
    double* pPi = &pi; //Store the memory address of the variable
    string* pText = &text; //Store the memory address of the variable

    //Variables and Pointers
    cout << "PRINT CORRESPONDING VARIABLE NAME AND THEIR MEMORY ADDRESS USING A POINTER" << endl;

    cout << "Integer: " << pInteger << endl; // Print the variable name and memory address.
    cout << "Pi: " << pPi << endl; // Print the variable name and memory address.
    cout << "Text: " << pText << endl; // Print the variable name and memory address.

    //Dereferencing a pointer
    cout << "PRINT POINTER AND DEREFERENCE" << endl;
    cout << pInteger << endl;
    cout << *pInteger << endl;
    cout << pPi << endl;
    cout << *pPi << endl;
    cout << pText << endl;
    cout << *pText << endl;

    return 0;
}