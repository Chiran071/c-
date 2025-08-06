#include<iostream>
using namespace std;
class student{
    static string clgname;
    string stdname;
    string address;
    string gender;

    public:
        static void getclg(){
            cout<<"enter college name"<<endl;
            cin>>clgname;
        }

        static void showclg(){
            cout<<"college: "<<clgname<<endl;
        }

        void getstd(){
            cout<<"enter std name adress and gender"<<endl;
            cin>>stdname>>address>>gender;
        }

        void showstd(){
            cout<<"name: "<<stdname<<endl<<"address: "<<address<<endl<<"gender: "<<gender<<endl<<endl;
        }


};
string student::clgname="";

int main(){
    student *s=new student[5];
    student::getclg();
    student::showclg();

    for(int i=0;i<5; i++){
        s[i].getstd();
    }

    for(int i=0;i<5; i++){
        s[i].showstd();
    }

    delete [] s;

    return 0;

}