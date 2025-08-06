#include<iostream>
using namespace std;

class Sankhya{
    int n1,n2,n3,n4;

    public:
        void getdata(){
            cout<<"enter 4 numbers"<<endl;
            cin>>n1>>n2>>n3>>n4;
        }

        void show(){
            cout<<"number is: "<<n1<<endl;
            cout<<"number is: "<<n2<<endl;
            cout<<"number is: "<<n3<<endl;
            cout<<"number is: "<<n4<<endl;
        }

        void operator ++(){
            ++n1;
            ++n2;
            ++n3;
            ++n4;
        }

        void operator --(int){
            n1--;
            n2--;
            n3--;
            n4--;
        }
};

int main(){
    Sankhya s1;
    s1.getdata();
    ++s1;
    s1.show();
    s1--;
    s1.show();
}