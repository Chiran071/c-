#include<iostream>
using namespace std;

inline void even(int x){
    if(x%2==0){
        cout<<x<<" is even"<<endl;
    }
    else{
        cout<<x<<" is odd"<<endl;
    }

}

int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    even(a);
}