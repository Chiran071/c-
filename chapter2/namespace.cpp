/*scope resolutionn operator/full path
2) using declaration
3) using directive*/
#include<iostream>
using namespace std;
namespace human{
    string name;
    string gender;
    namespace DOB{
        int day;
        int month;
        int year;
    }
}
int main(){
    cout<<"enter name and gender, DOB(year month day)"<<endl;
    cin>>human::name>>human::gender>>human::DOB::year>>human::DOB::month>>human::DOB::day;
    cout<<human::name<<" gender: "<<human::gender<<" DOB: "<<human::DOB::year<<"/"<<human::DOB::month<<"/"<<human::DOB::day;
    
}
