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

        void operator --(int){
            paisa--;
            if(paisa=-1){
                rs--;
                paisa=99;
            }
    }
    };



    int main(){
        money m1(3,0);
        m1--;
        m1.show();
    }