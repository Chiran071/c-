#include<iostream>

using namespace std;

int main(){
    float a,b,d;
    cout<<"insert 2 numbers: "<<endl;
    cin>>a>>b;
    try{
        if(b!=0){
            d=a/b;
            cout<<"division: "<<d<<endl;
        }
        else{
            throw 0;
        }

    }
    catch(int e){
            cout<<"not divi by: "<<e<<endl;
    }
   
    
}
