#include<iostream>
using namespace std;

class fullname{
    private:
        string firstName;
        string middleName;
        string lastName;

    public:

        void getName(){
            cout<<"enter name"<<endl;
            cin>>firstName>>middleName>>lastName;
        }

        void showName(){
            cout<<"first name: "<<firstName<<endl;
            cout<<"middle name: "<<middleName<<endl;
            cout<<"last name: "<<lastName<<endl;
        }
};

class student{
    private:
        int rollNO;
        fullname f;
        string faculty;

    public:
        void getstd(){

            cout<<"insert roll no";
            cin>>rollNO;

            f.getName();

            cout<<"which faculty"<<endl;
            cin>>faculty;

        }

        void showstd(){
            cout<<"roll number: "<<rollNO<<endl;
            f.showName();
            cout<<"faculty: "<<faculty<<endl;
        }

};

int main(){
    student s;
    s.getstd();
    s.showstd();
    return 0;
}