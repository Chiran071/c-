#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<setw(8)<<left<<"S.No"<<setw(18)<<left<<"Table"<<setw(18)<<left<<"Payment Time"<<setw(18)<<right<<"Total Bill"<<endl;
    cout<<setw(8)<<left<<"1"<<setw(18)<<left<<"Everest"<<setw(18)<<"16:20"<<setw(18)<<fixed<<setprecision(2)<<right<<6766.55<<endl;
    cout<<setw(8)<<left<<"2"<<setw(18)<<left<<"ABC"<<setw(18)<<"16:55"<<setw(18)<<setprecision(2)<<right<<498.99<<endl;
    cout<<setw(8)<<left<<"3"<<setw(18)<<left<<"LCC"<<setw(18)<<"17:05"<<setw(18)<<setprecision(2)<<right<<80000.00<<endl;
    cout<<setw(8)<<left<<"4"<<setw(18)<<left<<"BTW"<<setw(18)<<"18:18"<<setw(18)<<setprecision(2)<<right<<1234.55<<endl;
    cout<<setw(8)<<left<<"5"<<setw(18)<<left<<"KTM"<<setw(18)<<"18:18"<<setw(18)<<setprecision(2)<<right<<200.00<<endl;
    
}