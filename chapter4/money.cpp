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

        money add(money x,money y){
            money temp;
            temp.paisa=x.paisa+y.paisa;
            temp.rs=x.rs+y.rs;
            if (temp.paisa>=100){
                temp.rs++;
                temp.paisa-=100;
            }

            return temp;
        }

        void show(){
            cout<<"rs: "<<rs<<endl<<"paisa: "<<paisa<<endl;
        }
};

int main(){
    money m1(100,75);
    money m2(200,50);
    money m3;
    m3=m3.add(m1,m2);
    m3.show();
}