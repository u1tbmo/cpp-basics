//If Statements by u1tbmo
#include <iostream>
using namespace std;

int main(){
    bool is_cool;
    bool is_awesome;
    cout << "Input 1 for \"TRUE\" and 0 for \"FALSE\"." << endl;
    cout << "Are you cool? (1/0)" << endl;
    cin >> is_cool;
    cout << "Are you awesome? (1/0)" << endl;
    cin >> is_awesome;

    if(is_cool && is_awesome){
        cout << "You are cool and awesome!";
    }
    else if(is_cool && !is_awesome){
        cout << "You are cool although not awesome. (what\?\?)";
    }
    else if(!is_cool&& is_awesome){
        cout << "You are not cool although you're awesome. (what\?\?)";
    }
    else{
        cout << "You are not cool and awesome. (Although this message comes from a machine)";
    }
    
    return 0;
}