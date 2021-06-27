//User Input by u1tbmo
#include <iostream>
using namespace std;

int main(){
    int u_num_input;
    string u_name_input;
    string u_nickame_input;

    cout << "Enter your full name: ";
    getline(cin, u_name_input);
    cout << "Enter your nickname: ";
    cin >> u_nickame_input;
    cout << "Enter a number: ";
    cin >> u_num_input;
    
    cout << "Good day, " << u_name_input << "!\n";
    cout << "I will be calling you " << u_nickame_input << " for short.\n";
    cout << "Your number is " << u_num_input << ".";


    return 0;
}