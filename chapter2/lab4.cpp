// wap to create 3 functions with samee name solve them, two parameter perform division, three perform sum and 4 parameter perform multiplication
#include<iostream>
using namespace std;
float solve(int a, int b){
    return float(a)/b;
}
int solve(int a, int b, int c){
    return a+b+c;
}
int solve(int a, int b, int c, int d){
    return a*b*c*d;
}
int main(){
    int a,b,c,d;
    cout<<"enter 4 number"<<endl;
    cin>>a>>b>>c>>d;
    cout<<"result is: "<<solve(a,b)<<endl;
    cout<<"result is: "<<solve(a,b,c)<<endl;
    cout<<"result is: "<<solve(a,b,c,d)<<endl;
}