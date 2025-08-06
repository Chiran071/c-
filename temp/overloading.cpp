#include<iostream>
using namespace std;

void check(int x){
    if(x%2==0){
        cout<<x<<" is even"<<endl;
    }
    else{
        cout<<x<<" is odd"<<endl;
    }
}

void check(int x, int y){
    if(x>=y){
        cout<<x<<" is greater"<<endl;
    }
    else{
        cout<<y<<" is greater"<<endl;
    }
}

int main(){
    int x=4,y=3;
    check(y);
    check(x,y);
}