#include<iostream>
using namespace std;

class human{
    private:
        string name;
        int age;

    public:

        human(){
            name="";
            age=0;
        }

        human(string Name,int Age){
            name=Name;
            age=Age;
        }

        void showH(){
            cout<<"name: "<<name<<endl<<"age: "<<age<<endl;
        }

};

class department: public human{

    private:
        string deptname;

    public:

        department(){
            deptname="";
        }

        department(string Name,int Age,string Deptname): human(Name,Age){
            deptname=Deptname;
        }

        void showD(){
            showH();
            cout<<"deptname: "<<deptname<<endl;
        }
};

class Employee: public department{

    private:
        string post;
    
    public:

        Employee(){
            post="";
        }

        Employee(string Name, int Age, string Deptname,string Post): department(Name,Age,Deptname){
            post=Post;
        }

        void showE(){
            showD();
            cout<<"post: "<<post<<endl;
        }
};

int main(){
    Employee e1("chiran",20,"csit","manager");
    e1.showE();
}