#include<iostream>
#define add(p,q,r,s) p+q+r+s;
using namespace std;

inline float fah(float c){
    return (c*9/5)+32;
}

int main(){
    int p,q,r,s;
    float cel;
    cout<<"enter 4 numers"<<endl;
    cin>>p>>q>>r>>s;
    cout<<"enter temp in celcius"<<endl;
    cin>>cel;
    int sum=add(p,q,r,s);
    cout<<"sum is: "<<sum<<endl;
    cout<<"fah is: "<<fah(cel)<<endl;
    return 0;
}