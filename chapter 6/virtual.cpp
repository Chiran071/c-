#include<iostream>
using namespace std;

class First{
    int A;

    public:
        void getF(){
            cout<<"enter A"<<endl;
            cin>>A;
        }

        void showF(){
            cout<<"A is: "<<A<<endl;
        }
};

class Second: virtual public First{
    int B;

    public:
        void gets(){
            cout<<"enter B"<<endl;
            cin>>B;
        }

        void shows(){
            cout<<"B is: "<<B<<endl;
        }
};

class Third: virtual public First{
    int C;

    public:
        void gett(){
            cout<<"enter c"<<endl;
            cin>>C;
        }

        void showt(){
            cout<<"c is: "<<C<<endl;
        }
};

class Fourth: public Second,public Third{
    int D;

    public:
        void get4(){
            getF();
            gets();
            gett();
            cout<<"enter D"<<endl;
            cin>>D;
        }

        void show4(){
            showF();
            shows();
            showt();
            cout<<"D is: "<<D<<endl;
        }
};

int main(){
    Fourth f1;
    f1.get4();
    f1.show4();
    return 0;
}