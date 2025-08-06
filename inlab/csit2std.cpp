#include<iostream>
using namespace std;

class SUBJECTS{
    public:
        int oop;
        int ds;
        int mp;
        int math;
        int stat;
};

class CSIT2STD{
    string name;
    SUBJECTS s1;
    string gender;
    
    public:
    
    CSIT2STD(){
        name="";
        gender="";
    }

    CSIT2STD(string Name,int oop,int ds,int mp, int math,int stat,string Gender){
        name=Name;
        s1.oop=oop;
        s1.ds=ds;
        s1.mp=mp;
        s1.math=math;
        s1.stat=stat;
        gender=Gender;
    }

    void display(){
        cout<<"name: "<<name<<endl<<"OOP: "<<s1.oop<<endl<<"ds: "<<s1.ds<<endl<<"mp: "<<s1.mp<<endl<<"math: "<<s1.math<<endl<<"stat"<<s1.stat<<endl<<"gender: "<<gender;
    }

};

int main(){
    CSIT2STD sud1("chiran",25,24,22,41,17,"male");
    sud1.display();
}