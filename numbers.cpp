//Numbers by u1tbmo
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int integer = 1;
    int x;
    double decimal = 3.14;

    cout << 1 << endl; //Print integers
    cout << 9 + 10 << endl; //Print math results
    cout << 6 % 4<< endl; //Modulus operator
    cout << 10 + 29 * 10 << endl; //Order of operations
    cout << integer << endl; //Print number values using variables
    cout << integer++ << endl; //Increment a variable by adding 1
    cout << integer-- << endl; //Increment a variable by subtracting 1
    cout << 1 + 2.14 << endl; //Floating numbers take priority when present
    cout << 4 / 3 << endl; //Integer operations result in integers 
    cout << pow(10,3)<< endl; //pow(x,y) takes x to the power of y
    cout << sqrt(100)<< endl; //sqrt(x) takes the sqrt of x
    cout << round(decimal)<< endl; //round(x) rounds the number x using estimation rules
    cout << ceil(decimal)<< endl; //ceil(x) rounds x up
    cout << floor(decimal) << endl; //floor(x) rounds x down
    cout << fmax(10,20)<< endl; //fmax(x,y) finds the larger number
    cout << fmin(10,20)<< endl; //fmin(x,y) finds the smaller number

    return 0;
}