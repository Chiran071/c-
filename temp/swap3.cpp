#include<iostream>
using namespace std;

void swap(int &x, int &y,int &z){
    int temp=x;
    x=z;
    z=y;
    y=temp;
}

int main(){
    int a=1,b=2,c=3;
    swap(a,b,c);
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
    return 0;
}