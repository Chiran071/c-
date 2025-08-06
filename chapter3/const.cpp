#include<iostream>
using namespace std;

class student{

    private:
        int rollno;
        string name;
        string gender;
        int semester;
    public:
        student(int Rollno,string Name, string Gender, int Semester){
            rollno=Rollno;
            name=Name;
            gender=Gender;
            semester=Semester;
        }

        void display(){
            cout<<"name is: "<<name<<endl<<"roll no is: "<<rollno<<endl<<"gender is: "<<gender<<endl<<"semester is: "<<semester<<endl;
        }

};

int main(){
    student std1(12,"chiran","male",2);
    std1.display();
}