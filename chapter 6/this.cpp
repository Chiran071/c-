#include<iostream>
using namespace std;

class my{
    int a,b,c,d;

    public:
        my(){}

        my(int a, int b, int c, int d){
            this->a=a;
            this->b=b;
            this->c=c;
            this->d=d;

        }

        void show(){
            cout<<a<<b<<c<<d<<endl;
        }
};

int main(){
    my m(7,20,3,5);
    m.show();
    return 0;
}