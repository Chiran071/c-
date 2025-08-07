#include<iostream>
#include<exception>
using namespace std;

class meroException: public exception{
    public:
        void show(){
            cout<<"my exception"<<endl;
        }
};

int main(){
    int N;
    cout<<"enter N"<<endl;
    cin>>N;
    try{
        if(N==1){
            throw meroException();
        }
        else
            cout<<N<<endl;
    }catch(meroException e){
        e.show();
    }
    return 0;
}

