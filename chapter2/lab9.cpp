#include<iostream>
using namespace std;
namespace college{
    string name;
    string principal;
    int estb;
    namespace address{
        string city;
        string country;
    }

}
namespace student{
    string name;
    string faculty;
    int sem;
    int joined_year;
    namespace address{
        string city;
        string country;
    }
}
using namespace student;
using namespace student::address;

int main(){
    cout<<"enter college name, city country, principal, estb year"<<endl;
    cin>>college::name>>college::address::city>>college::address::country>>college::principal>>college::estb;
    cout<<"enter student name faculty semester, joined year, city and country "<<endl;
    cin>>name>>faculty>>sem>>joined_year>>city>>country;
    cout<<"college: "<<college::name<<" city: "<<college::address::city<<" country: "<<college::address::country<<" principal: "<<college::principal<<" estb: "<<college::estb<<endl;
    cout<<"student_name: "<<name<<" faculty: "<<faculty<<" semester"<<sem<<" joined year: "<<joined_year<<" city: "<<city<<" country: "<<country<<endl;
}