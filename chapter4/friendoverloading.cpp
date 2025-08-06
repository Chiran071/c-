#include<iostream>
using namespace std;

class sankhya{
    int n1,n2,n3;

    public:
        sankhya(){}

        sankhya(int n1,int n2, int n3){
            this->n1=n1;
            this->n2=n2;
            this->n3=n3;
        }

        void show(){
            cout<<"n1: "<<n1<<endl<<"n2: "<<n2<<endl<<"n3: "<<n3<<endl;
        }

        friend void operator ++(sankhya &s,int);

};

void operator ++(sankhya &s,int){
    s.n1++;
    s.n2++;
    s.n3++;
}

int main(){
    sankhya s1(1,2,3);
    s1++;
    s1.show();
}