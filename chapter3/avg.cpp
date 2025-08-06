#include<iostream>
using namespace std;
class avg{
    private:
        int a,b,c,d,e;

    public:

        avg(int A,int B, int C, int D,int E){
            a=A;
            b=B;
            c=C;
            d=D;
            e=E;
        }

        void display(){
            cout<<"average is: "<<(a+b+c+d+e)/5.0<<endl;
        }

};
int main(){
    avg a1(1,2,3,4,6);
    a1.display();
}