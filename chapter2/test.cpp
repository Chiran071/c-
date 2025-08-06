//Given an integer n, return true if it is a power of two. otherwise, return false/
//an integer n is a power of two, if there exists an integer c such that n== 2^x
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    
    cout<<"enter a integer"<<endl;
    cin>>n;
    float temp=sqrt(n);
    int temp2=temp;
    while(n%2==0){
        n/=2;
    }
    if(n==1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}