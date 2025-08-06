#include<iostream>
using namespace std;
void display(char c='x', int n=1){
    for(int i=0;i<n;i++){
        cout<<c<<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    char c;
    cout<<"enter the character and no of times you wanna display"<<endl;
    cin>>c>>n;
    display();
    display(c,n);

}