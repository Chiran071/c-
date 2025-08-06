#include<iostream>
using namespace std;

class complex{
    int real;
    int imag;

    public:
        complex(){};

        complex(int r,int i){
            real=r;
            imag=i;
        }

        complex operator *(complex m){
            complex temp;
            temp.real=real*m.real-imag*m.imag;
            temp.imag=real*m.imag+imag*m.real;
            return temp;
        }

        void show(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }

        friend complex operator +(complex c1,complex c2);
        friend complex operator -(complex c1,complex c2);
};

complex operator +(complex c1, complex c2){
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}

complex operator -(complex c1, complex c2){
    complex temp;
    temp.real=c1.real-c2.real;
    temp.imag=c1.imag-c2.imag;
    return temp;
}

int main(){
    complex c1(2,3),c2(1,4),c3,c4,c5,c6;
    c3=c1*c2;
    c3.show();
    c4=c1+c2;
    c4.show();
    c5=c1-c2;
    c5.show();

}
