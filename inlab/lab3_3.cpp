// Create a class STUDENT with ROLLNO, NAME, GENDER, ADDRESS, JOINEDYEAR,
// TOTALFEES. Initialize objects with default, parameterized and copy constructor. Use
// DISPLAY() method to show its properties. When using copy constructor increase
// ROLLNO and JOINEDYEAR by one and TOTALFEES by 50,000.

#include<iostream>
using namespace std;
class student{
    private:
        int rollno;
        string name;
        string gender;
        string address;
        int joinedyear;
        int totalfees;
    
    public:
        student(){
            name="ram";
            gender="male";
            address="divertol";
            joinedyear=2080;
            totalfees=400000;

        }

        student(int Rollno, string Name, string Gender, string Address, int Joinedyear, int Totalfees){
            rollno=Rollno;
            name=Name;
            gender=Gender;
            address=Address;
            joinedyear=Joinedyear;
            totalfees=Totalfees;
        }

        student(student &obj){
            rollno=obj.rollno + 1;
            name=obj.name;
            gender=obj.gender;
            address=obj.gender;
            joinedyear=obj.joinedyear+1;
            totalfees=obj.totalfees +50000;
        }

        void Display(){
            cout<<"roll no is: "<<rollno<<endl<<"name is: "<<name<<endl<<"gender is: "<<gender<<endl<<"adress is: "<<address<<endl<<"joined year is: "<<joinedyear<<endl<<"total fee: "<<totalfees<<endl<<endl;
        }



};
int main(){
    student s1;
    s1.Display();

    student s2(12,"chiran","male","manigram",2081,200000);
    s2.Display();

    student s3(s2);
    s3.Display();

}