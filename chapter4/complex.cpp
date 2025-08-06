#include<iostream>
using namespace std;
class complex{
    private:
        int real;
        int imag;
    
    public:
        complex(){
            real=0;
            imag=0;
        }

        complex(int r, int i){
            real=r;
            imag=i;
        }

        complex add(complex x,complex y){
            complex temp;
            temp.real=x.real+y.real;
            temp.imag=x.imag+y.imag;
            return temp;
        }

        void show(){
            cout<<"sum is: "<<real<<" + "<<imag<<"i"<<endl;
        }
};

int main(){
    complex c1(1,2);
    complex c2(2,3);
    complex c3;
    c3=c3.add(c1,c2);
    c3.show();

}