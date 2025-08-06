#include<iostream>
using namespace std;

class Sign{
    int a,b;

    public:
        Sign(){}

        Sign(int a, int b){
            this->a=a;
            this->b=b;
        }

        void show(){
            cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
        }

        void operator -(){
            a=-a;
            b=-b;
        }
};

int main(){
    Sign s1(1,-4);
    -s1;
    s1.show();
    return 0;
}