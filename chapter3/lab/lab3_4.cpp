// Create a class MARKS with attributes ROLLNO, NAME, ENG, MATH and SCIENCE. Use
// parameterized constructor to intialize and SHOW( ) to display. Make friend function
// RESULT( ) which will show whether the student is PASS or FAIL.

#include<iostream>
using namespace std;
class Marks{
        int rollno;
        string name;
        int eng;
        int math;
        int science;
    public:
        Marks(){
            rollno=0;
            name="";
            eng=0;
            math=0;
            science=0;
        }
        Marks(int Rollno, string Name, int Eng, int Math, int Science){
            name=Name;
            rollno=Rollno;
            eng=Eng;
            math=Math;
            science=Science;
        }
        void show(){
            cout<<"roll no:"<<rollno<<endl<<"Name: "<<name<<endl<<"marks in eng: "<<eng<<endl<<"marks in math: "<<math<<endl<<"marks in science: "<<science<<endl;
        }

        friend void result(Marks obj);

};

void result(Marks obj){
    if(obj.math>=40 && obj.eng>=40 && obj.science>=40){
        cout<<obj.name<<" is Pass"<<endl<<endl;
    }
    else{
        cout<<obj.name<<" is fail"<<endl<<endl;
    }
}

int main(){
    Marks m1(2,"ram",40,35,80);
    m1.show();
    result(m1);

    Marks m2(12,"chiran",80,80,80);
    m2.show();
    result(m2);
}