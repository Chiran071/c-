#include<iostream>
using namespace std;
int multi(int a, int b, int c=1, int d=1,int e=1){
    return a*b*c*d*e;
}
int main(){
    int a,b,c,d,e;
    cout<<"enter 5 numbers"<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<"result is "<<multi(a,b)<<endl;
    cout<<"result is "<<multi(a,b,c)<<endl;
    cout<<"result is "<<multi(a,b,c,d)<<endl;
    cout<<"result is "<<multi(a,b,c,d,e)<<endl;
    
}