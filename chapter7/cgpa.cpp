#include<iostream>
using namespace std;

int main(){
    string name;
    float cgpa;

    cout<<"enter name and cgpa"<<endl;
    cin>>name>>cgpa;

    try{
        if(cgpa>=0 && cgpa<=5){
            cout<<"name: "<<name<<endl<<"cgpa: "<<cgpa<<endl;
        }else{
            throw 0;
        }
    }
    catch(int e){
        cout<<"something went wrong"<<endl;
    }

    return 0;
}