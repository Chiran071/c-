#include<iostream>
using namespace std;

int main(){
    int* arr= new int(3);

    cout<<"enter 3 numbers"<<endl;
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }

    cout<<"numbers are: "<<endl;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<"\t";
    }
    delete [] arr;

    return 0;


}