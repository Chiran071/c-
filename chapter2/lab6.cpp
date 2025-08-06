#include<iostream>
using namespace std;
inline float fah(int c){
    return (float(c)*9/5) + 32;
}
int main(){
    int c;
    cout<<"enter temp in celcious"<<endl;
    cin>>c;
    cout<<"temp in fah is: "<<fah(c)<<endl;
    return 0;
}