#include<iostream>
using namespace std;

class sankhya{
    private:
        int a,b,c,d,e;

    public:
        sankhya(int n1, int n2, int n3, int n4, int n5){
            a=n1;
            b=n2;
            c=n3;
            d=n4;
            e=n5;
        }

    friend void avg(sankhya &obj);

};

void avg(sankhya &obj){
    float temp=float(obj.a+obj.b+obj.c+obj.d+obj.e)/5;
    cout<<"average is: "<<temp<<endl;
}

int main(){
    sankhya nums(1,2,3,4,6);
    avg(nums);
}