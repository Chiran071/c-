#include<iostream>
using namespace std;

class fullName{
    string firstname;
    string lastname;

    public:
        void getname(){
            cout<<"enter your full name"<<endl;
            cin>>firstname>>lastname;
        }

        void showname(){
            cout<<"name : "<<firstname<<" "<<lastname<<endl;
        }
};

class person{
    fullName f;
    string gender;
    int age;

    public:
        void getperson(){
            f.getname();
            cout<<"enter gender and age"<<endl;
            cin>>gender>>age;
        }

        void showperson(){
            f.showname();
            cout<<"gender: "<<gender<<endl;
            cout<<"age: "<<age<<endl;
        }
};

int main(){
    person p1;
    p1.getperson();
    p1.showperson();
    return 0;
}