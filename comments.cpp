//Comments by u1tbmo
#include <iostream>
using namespace std;

int main(){
    //This is a single line comment.
    cout << "This is obviously not a comment." << endl;
    
    cout << "This is also obviously not a comment." << endl; // This is also a single line comment.

    /*
    All lines between // with asterisks are considered comments */

    //The following code exists but will never run as it is a comment.
    // cout << "This should not run." << endl; 

    return 0;
}