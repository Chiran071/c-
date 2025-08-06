#include<iostream>
using namespace std;

class money{
    private:
        int rs;
        int paisa;
    
    public:

        money(){
            rs=0;
            paisa=0;
        }

        money(int r, int p){
            rs=r;
            paisa=p;
        }

        void show(){
            cout<<"rs: "<<rs<<endl<<"paisa: "<<paisa<<endl;
        }

        friend void operator ++(money &m);
    };

    void operator ++(money &m){
        m.rs=m.rs+(m.paisa+1)/100;
        m.paisa=(m.paisa+1)%100;
    }

    int main(){
        money m1(4,99);
        ++m1;
        m1.show();
    }