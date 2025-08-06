#include<iostream>
using namespace std;
class number{
    private:
        int x;
        int y;
    public:
        void input(){
            cout<<"enter x and y"<<endl;
            cin>>x>>y;
        }
        void sum(){
            cout<<"sum is: "<< x+y<<endl;
        }
        void sub(){
            cout<<"diff is: "<<x-y<<endl;
        }
        void multi(){
            cout<<"multi is: "<<x*y<<endl;
        }
    
};
int main(){
    number a;
    a.input();
    a.sum();
    a.sub();
    a.multi();
}