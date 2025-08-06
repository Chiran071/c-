#include<iostream>
using namespace std;

class First{
    int a;

    public:
        void get(){
            cout<<"enter a number"<<endl;
            cin>>a;
        }

        void show(){
            cout<<"1st number is: "<<a<<endl;
        }

};

class Second:public First{
    int b;

    public:
        void get(){
            First::get();
            cout<<"enter 2nd number"<<endl;
            cin>>b;
        }

        void show(){
            First::show();
            cout<<"2nd number is: "<<b<<endl;
        }
};

class Third:public Second{
    int c;

    public:
        void get(){
            Second::get();
            cout<<"enter 3rd number"<<endl;
            cin>>c;
        }

        void show(){
            Second::show();
            cout<<"3nd number is: "<<c<<endl;
        }


};

int main(){
    Third t1;
    t1.get();
    t1.show(); 
}