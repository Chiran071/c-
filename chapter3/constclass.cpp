#include<iostream>
using namespace std;
class student{
    private:
        int rollno;
        string name;

    public:
        student(int Roll,string Name){
         rollno=Roll;
         name=Name;
        }

        void showdata() const{
            cout<<"rollno: "<<rollno<<endl<<"name: "<<name<<endl<<endl;
        }

};

int main(){
    const student std1(10,"chiran aryal");
    const student std2(2,"bibek ");
    std1.showdata();
    std2.showdata();

}