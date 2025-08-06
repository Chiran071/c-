#include<iostream>
using namespace std;

class dateofbirth{
    int day;
    int month;
    int year;

    public:
        void getdob(){
            cout<<"enter date of birth(year, month day)"<<endl;
            cin>>year>>month>>day;
        }

        void showdob(){
            cout<<"date of birth:"<<year<<"/"<<month<<"/"<<day<<endl;
        }
};

class employee{
    int empid;
    string ename;
    string gender;
    dateofbirth dob;

    public:

        void getE(){
            cout<<"enter emp id name and gender"<<endl;
            cin>>empid>>ename>>gender;
            dob.getdob();
        }

        void showE(){
            cout<<" emp id: "<<empid<<endl<<"employee name: "<<ename<<endl<<"gender: "<<gender<<endl;
            dob.showdob();
        }
};

int main(){
    employee e1;
    e1.getE();
    e1.showE();
    return 0;
}