#include<iostream>
using namespace std;

void display(char c='$', int x=5){
    cout<<"character: "<<c<<endl<<"integer: "<<x<<endl<<endl;
}

int main(){
    char ch='a';
    int x=12;
    display();
    display(ch,x);
    return 0;
}