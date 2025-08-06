#include<iostream>
using namespace std;

class Nepali{
    int amount;

    public:
        Nepali(){}

        Nepali(int dollor){
            amount=133*dollor;
        }

        void show(){
            cout<<"nepali: "<<amount<<endl;
        }
};

int main(){
    int dollor=3;

    Nepali n1;
    n1=dollor;

    n1.show();
}