//Nested Loops by u1tbmo
#include <iostream>
using namespace std;

int main(){
    int num_grid[3][2] = {
        {1,2},    
        {3,4},    
        {5,6}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << num_grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}