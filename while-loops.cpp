//While Loops by u1tbmo
#include <iostream>
using namespace std;

int main(){
    int x = 1;
    int y = 1;
    while(x <= 5){
        cout << x << endl;
        x++;
    }

    do{
        cout << y << endl;
        y++;
    }
    while(y <= 5);

    return 0;
}