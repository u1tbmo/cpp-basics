//Return Statements by u1tbmo
#include <iostream>
#include <cmath>
using namespace std;

double num_cuber(double input_num){
    double output_num = pow(input_num, 3);
    return output_num;
}

int main(){
    double user_num;
    cout << "Enter number: ";
    cin >> user_num;
    cout << num_cuber(user_num);
    return 0;
}