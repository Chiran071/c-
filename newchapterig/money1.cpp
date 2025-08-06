#include<iostream>
using namespace std;

class money{
    private:
        int rs,paisa;
    
    public:
        money(){}

        money(int rs,int paisa){
            this->rs=rs;
            this->paisa=paisa;
        }

        friend bool &operator==(money &b1, money &b2);
};

bool &operator==(money &b1, money &b2){
    if(b1.rs==b2.rs && b1.paisa==b1.paisa){
        return true;
    }
    return false;
}
