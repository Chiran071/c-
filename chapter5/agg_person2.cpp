#include<iostream>
using namespace std;

class fullName{
    public:
        string firstname;
        string lastname;
};

class person{
    fullName f;
    string gender;
    int age;

    public:
        void getperson(){
            // f.getname();
            cout<<"enter your full name"<<endl;
            cin>>f.firstname>>f.lastname;
            cout<<"enter gender and age"<<endl;
            cin>>gender>>age;
        }

        void showperson(){
            // f.showname();
            cout<<"name : "<<f.firstname<<" "<<f.lastname<<endl;
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