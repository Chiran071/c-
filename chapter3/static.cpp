#include<iostream>
using namespace std;
class student{
    private:
        static string college;
        int rollno;
        string name;
        string faculty;
        string semester;
    
    public:
        void getstd(int Rollno, string Name, string Faculty, string Semester){
            rollno=Rollno;
            name=Name;
            faculty=Faculty;
            semester=Semester;
        }

        void showstd(){
            cout<<"rolll no: "<<rollno<<endl<<"name: "<<name<<endl<<"faculty: "<<faculty<<endl<<"semester: "<<semester<<endl<<endl;
        }

        static void showclg(){
            cout<<"collge name is: "<<college<<endl<<endl;
        }

        friend void collegename(string name);
    
};

string student::college;
void collegename(string name){
    student::college=name;
}

int main(){
    string name;
    cout<<"enter college name"<<endl;
    cin>>name;
    collegename(name);

    student s1,s2,s3;
    s1.getstd(1,"chiran","csit","2nd");
    s2.getstd(14,"ram","csit","4nd");
    s3.getstd(16,"hari","csit","1st");

    student::showclg();
    s1.showstd();
    s2.showstd();
    s3.showstd();

}