#include<iostream>
using namespace std;
int main(){
    int *arr=new int [10],count=0;
    // arr=new int[10];
    cout<<"enter 10 numbers"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            count++;

        }
    }
    cout<<"no of even numbers are: "<<count<<endl;
    delete [] arr;

}