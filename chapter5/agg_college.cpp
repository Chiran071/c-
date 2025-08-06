#include<iostream>
using namespace std;

class address{
    string municipality;
    int ward;
    string street;

    public:

        void getadd(){
            cout<<"enter muni name ward no and street"<<endl;
            cin>>municipality>>ward>>street;
        }

        void showadd(){
            cout<<"municipality: "<<municipality<<endl<<"ward no: "<<ward<<endl<<"street: "<<street<<endl;
        }
};

class admin{
    string campusChief;
    string csitCoordinator;
    string bcaCoordinator;

    public:
        void getA(){
            cout<<"enter campus chef, csit coordinator and bca coordinator name"<<endl;
            cin>>campusChief>>csitCoordinator>>bcaCoordinator;
        }

        void showA(){
            cout<<"campus chief: "<<campusChief<<endl<<"csit coordinator: "<<csitCoordinator<<endl<<"bcacoordinator: "<<bcaCoordinator<<endl;
        }
};

class college{
    string clgname;
    address add;
    admin a;
    int Establish_year;
    string phone;

    public:
        void getC(){
            cout<<"enter clg name"<<endl;
            cin>>clgname;
            add.getadd();
            a.getA();
            cout<<"enter establish year and phone no"<<endl;
            cin>>Establish_year>>phone;
        }

        void showC(){
            cout<<"college name: "<<clgname<<endl;
            add.showadd();
            a.showA();
            cout<<"establish_year: "<<Establish_year<<endl<<"phone: "<<phone<<endl;
        }
};

int main(){
    college c1;
    c1.getC();
    c1.showC();
}