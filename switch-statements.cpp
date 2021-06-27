//Switch Statements by u1tbmo
#include <iostream>
using namespace std;

string get_month(int month_num){
    string month_name;

    switch(month_num){
    case 1:
        month_name = "January";
        break;
    case 2:
        month_name = "February";
        break;
    case 3:
        month_name = "March";
        break;
    case 4:
        month_name = "April";
        break;
    case 5:
        month_name = "May";
        break;
    case 6:
        month_name = "June";
        break;
    case 7:
        month_name = "July";
        break;
    case 8:
        month_name = "August";
        break;
    case 9:
        month_name = "September";
        break;
    case 10:
        month_name = "October";
        break;
    case 11:
        month_name = "November";
        break;
    case 12:
        month_name = "December";
        break;
    default:
        month_name = "Invalid Number";
    }

    return month_name;
}

int main(){
    int x;

    cout << "Enter a number from 1-12. \n >>> ";
    cin >> x;
    cout << "That number corresponds to " << get_month(x) << ".";
    return 0;
}