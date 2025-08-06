#include<iostream>
using namespace std;
class person{
    private:
        string name;
        string gender;
        int age;
    
    public:
        void getdata(){
            cout<<"enter name gender and age"<<endl;
            cin>>name>>gender>>age;
        }
        void showdata(){
            cout<<"name is: "<<name<<" gender is: "<<gender<<" age is: "<<age<<endl;
        }
};
int main(){
    person p1;
    p1.getdata();
    p1.showdata();
}