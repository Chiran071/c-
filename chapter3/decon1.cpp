#include<iostream>
using namespace std;
class employee{
    private:
        int empid;
        string empname;
        string gender;
        string post;
        int salary;
    public:
        employee(){};

        employee(int Empid, string Empname,string Gender, string Post,int Salary){
            empid=Empid;
            empname=Empname;
            gender=Gender;
            post=Post;
            salary=Salary;
        }

        employee(employee &obj){
            empid=obj.empid;
            empname=obj.empname;
            gender=obj.gender;
            post=obj.post;
            salary=obj.salary;
        }

        void showEmp(){
            cout<<"id is: "<<empid<<endl<<"name is: "<<empname<<endl<<"gender is: "<<gender<<endl<<"post is: "<<post<<endl<<"salary is: "<<salary<<endl;
        }
        ~employee(){
            cout<<"FInish";
        }
};

int main(){
    employee e1;
    e1.showEmp();

    employee e2(123,"chiran","male","student",50000);
    e2.showEmp();

    employee e3(e2);
    e3.showEmp();

    employee e4=e2;
    e4.showEmp();

    return 0;

}