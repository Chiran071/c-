#include<iostream>
using namespace std;
class student{
    private:
        int roll_no;
        string name;
        string gender;
        int semester;
    public:
        void insert();
        void display();
};
void student::insert(){
    cout<<"enter roll no name gender and sem"<<endl;
    cin>>roll_no>>name>>gender>>semester;
}
void student::display(){
    cout<<"name is: "<<name<<" roll no is: "<<roll_no<<" gender is: "<<gender<<" sem is: "<<semester<<endl;
}
int main(){
    student s1;
    s1.insert();
    s1.display();
}