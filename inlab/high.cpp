//Create three dynamic variable A, B and C. Input data and show highest among them. Then delete all variables.

#include<iostream>
using namespace std;
int main(){
    int* a=new int(1),*b=new int(1),*c=new int(1);

    cout<<"enter 4 numbers"<<endl;
    cin>>*a>>*b>>*c;
    if(*a>=*b && *a>=*c)
        cout<<*a<<" is highest"<<endl;
    if(*b>=*c)
        cout<<*b<<" is highest"<<endl;
    else
        cout<<*c<<" is highest"<<endl;
    delete a;
    delete b;
    delete c;
}