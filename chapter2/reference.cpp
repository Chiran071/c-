#include<iostream>
using namespace std;
int x=5;
int &change(){
    return x;
}
int main(){
    x=20;
    change()=50;
    cout<<x<<endl;
    return 0;
}