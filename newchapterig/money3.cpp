#include<iostream>
using namespace std;

class money{
    int rs;
    int paisa;

    public:

        money(){}

        money(float a){
            rs=a;
            paisa=(a-rs)*100;
        }

        void show(){
            cout<<"rs: "<<rs<<endl<<"paisa: "<<paisa<<endl;
        }
};

int main(){
    float amount= 72.75;
    money m;
    m=amount;
    m.show();
    return 0;
}

