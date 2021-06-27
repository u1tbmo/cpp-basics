//If Statements 2 by u1tbmo
#include <iostream>
using namespace std;

int get_max(int x, int y, int z){
    int result;

    if(x >= y && x >= z){
        result = x;
    }
    else if(y >= x && y >= z){
        result = y;
    }
    else if(z >= x && z >= y){
        result = z;
    }

    return result;
}

int main(){
    int x, y, z;

    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;
    cout << "Enter another number: ";
    cin >> z;
    
    cout << "The largest number is " << get_max(x,y,z) << ".";
    return 0;
}