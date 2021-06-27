//Arrays by u1tbmo
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int set_of_ints[10] = {0,1,2,3,4,5,6,7,8,9};
    int another_set_of_ints[5];
    
    cout << set_of_ints[0] << endl;
    cout << set_of_ints[6] << endl;
    cout << set_of_ints[4] << endl;
    cout << set_of_ints[9] << endl;
    cout << set_of_ints[3] << endl;

    set_of_ints[0] = 10;

    cout << set_of_ints[0] << endl;

    another_set_of_ints[0] = 0;
    another_set_of_ints[1] = 1;
    another_set_of_ints[2] = 2;
    another_set_of_ints[3] = 3;
    another_set_of_ints[4] = 4;

    cout << another_set_of_ints[0] << endl;
    cout << another_set_of_ints[1] << endl;
    cout << another_set_of_ints[2] << endl;
    cout << another_set_of_ints[3] << endl;
    cout << another_set_of_ints[4] << endl;

    return 0;
}