// student  static clg name
//          campus chief
//          __COUNT
//          rollno
//          std name facultu join year getstd()show std() static show college() show total std

#include<iostream>
using namespace std;

class student{
    private:
        static string clg_name;
        static string campus_chef;
        static int count;
                int rollno;
                string std_name;
                string faculty;
                int join_year;

    public:

            student(){
                count+=1;

            }

            void getstd(){
                cout<<"enter student name"<<endl;
                getline(cin,std_name);
                cout<<"enter roll no faculty and joined year"<<endl;
                cin>>rollno;
                cin.ignore();
                cin>>faculty>>join_year;
                cin.ignore();
            }

            void showstd(){
                cout<<"std name: "<<std_name<<endl<<"roll no: "<<rollno<<endl<<"faculty: "<<faculty<<endl<<"joined year: "<<join_year<<endl<<endl;
            }

            static void showcollege(){
                cout<<"collge name: "<<clg_name<<endl<<"campus chef: "<<campus_chef<<endl<<endl;
            }

            static void showTotalStd(){
                cout<<"no of data: "<<count<<endl<<endl;
            }

};
int student::count=0;
string student::clg_name="lcc";
string student::campus_chef="ram";
int main(){
    student s1,s2;
    s1.getstd();
    s1.showcollege();
    s2.getstd();
    s2.showcollege();
    s1.showTotalStd();
    s1.showstd();
    s2.showTotalStd();
    s2.showstd();
}