//Exponent Functions by u1tbmo
#include <iostream>
#include <cmath>
using namespace std;

double exp_func(double base_num, double power_num){
        double result = pow(base_num, power_num);
    return result;
}
int main(){
    double base_num, power_num;
    cout << "Enter the base number: ";
    cin >> base_num;
    cout << "Enter the exponent: ";
    cin >> power_num;
    cout << exp_func(base_num, power_num);
    return 0;
}