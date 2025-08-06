#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<setw(50)<<setfill('*')<<" "<<endl<<endl;
    cout<<setw(50)<<setfill('-')<<" "<<endl;
    cout<<setfill(' ')<<setw(10)<<right<<"S.No"<<setw(12)<<"Name"<<setw(12)<<"address"<<setw(12)<<"salary"<<endl;
    cout<<setw(10)<<right<<"1"<<setw(12)<<"Ram"<<setw(12)<<"KTM"<<setw(12)<<fixed<<setprecision(2)<<50000.500<<endl;
    cout<<setw(10)<<right<<"2"<<setw(12)<<"Hari"<<setw(12)<<"Butwal"<<setw(12)<<70500.75000<<endl;
    cout<<setw(50)<<setfill('-')<<" "<<endl;
}