//Inheritance by u1tbmo
#include <iostream>
using namespace std;

class Cook{
    public:
        void cook_chicken(){
            cout << "The cook cooks chicken." << endl;
        }
        void cook_beef(){
            cout << "The cook cooks beef." << endl;
        }
        void cook_pork(){
            cout << "The cook cooks pork." << endl;
        }
};

class ProCook : public Cook{
    public:
        void cook_mashedPotatoes(){
            cout << "The pro cook makes mashed potatoes." << endl;
        }
        void cook_wellington(){
            cout << "The pro cook makes beef wellington." << endl;
        }
        void cook_expensiveDish(){
            cout << "The pro cook makes an expensive dish that you unfortunately cannot afford." << endl;
        }
        void cook_chicken(){
            cout << "The pro cook cooks chicken beautifully." << endl;
        }
        void cook_beef(){
            cout << "The pro cook cooks medium rare beef." << endl;
        }
        void cook_pork(){
            cout << "The pro cook cooks tender pork." << endl;
        }
};

int main(){
    Cook basic_chef;
    basic_chef.cook_beef();
    
    ProCook pro_chef;
    pro_chef.cook_beef();
    
    ProCook gordon_ramsey;
    gordon_ramsey.cook_expensiveDish();
    
    return 0;
}