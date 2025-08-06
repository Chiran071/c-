#include<iostream>
using namespace std;
class college{
    private: 
        static string university;
        string collegename;
        string location;
        string establishyear;
        string faculties;

    public:
        void getclg(){
            cout<<"enter college name, location, estb, fac"<<endl;
            cin>>collegename>>location>>establishyear>>faculties;

        }

        void showclg(){
            cout<<"college name: "<<collegename<<endl<<"location: "<<location<<endl<<"estb: "<<establishyear<<endl<<"faculty: "<<faculties<<endl<<endl;
        }

        static void getuiversity(){
            cout<<"enter name of university"<<endl;
            cin>>university;
        }

        static void showuniversity(){
            cout<<"university name: "<<university<<endl;
        }

};

string college::university;

int main(){
    college c[10];
    college::getuiversity();
    
    for(int i=0;i<2;i++){
        c[i].getclg();
    }

    college::showuniversity;
    for(int i=0;i<2;i++){
        c[i].showclg();
    }
}