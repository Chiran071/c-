//Create a variable and a pointer to that variable. Show address and value of that variable using pointer.

#include<iostream>
using namespace std;
int main(){
    int a;
    int* ptr=&a;
    cout<<"address is "<<ptr<<endl;
    cout<<"value is "<<*ptr<<endl;
}