#include<iostream>
using namespace std;
int main(){
    int n,arr[10];
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sort[10];
    //copying array to sort array
    for(int i=0;i<n;i++)
    sort[i]=arr[i];

    //sorting sort
    for(int i=0;i<n-1;i++){
        for(int j=i+1;i<n;i++){
            if(sort[i]>sort[j]){
                int temp=sort[i];
                sort[i]=sort[j];
                sort[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        
        
    }

}