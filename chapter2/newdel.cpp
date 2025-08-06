#include<iostream>
using namespace std;
int main(){
int size,i;
int *ptr;
cout<<"specify size for dynamic memory: ";
cin>>size;
ptr=new int[size];
for(i=0;i<size;i++){
    cout<<"insert number: ";
    cin>>ptr[i];
}
cout<<"number in array are: "<<endl;
for(i=0;i<size;i++){
    cout<<ptr[i];
}
delete [] ptr;
return 0;
}

