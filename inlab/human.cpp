#include<iostream>
using namespace std;

class Human{
    string Name;
    int Age;

    public:
        Human(){
          Name="";
          Age=0;  
        }

        Human(string name, int age){
            Name=name;
            Age=age;
        }

        void DISPLAY(){
            cout<<"name is: "<<Name<<endl<<"age is: "<<Age<<endl;
        }
};

class Employee:public Human{
    int salary;

    public:
        Employee(){}
        
        Employee(string name,int age,int Salary ):Human(name,age){
            salary=Salary;
        }

        void DISPLAY(){
            Human::DISPLAY();
            cout<<"salary is: "<<salary<<endl;
        }
};

class Teacher: public Employee{
    string faculty;

    public:
        Teacher(){
            faculty="";
        }

        Teacher(string name,int age,int Salary, string Faculty):Employee(name,age,Salary){
            faculty=Faculty;
        }

        void DISPLAY(){
            Employee::DISPLAY();
            cout<<"facutly is: "<<faculty<<endl;
        }
};

int main(){
    Teacher t1("hari",29,50000,"csit");
    t1.DISPLAY();
    
}