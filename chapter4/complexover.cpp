#include<iostream>
using namespace std;
class complex{
    private:
        int real;
        int imag;
    
    public:
        complex(){}

        complex(int r, int i){
            real=r;
            imag=i;
        }

        void show(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

        complex operator +(complex c){
            complex temp;
            temp.real=real+c.real;
            temp.imag=imag+c.imag;
            return temp;
        }

};

int main(){
    complex c1(1,2),c2(2,6),c3;
    c3=c1+c2;
    c3.show();
}