#include<iostream>
using namespace std;

class Arithmetic{
    private:
        int n1,n2;
    public:
        Arithmetic(){
            n1=0;
            n2=0;
        }

        Arithmetic(int N1, int N2){
            n1=N1;
            n2=N2;
        }
        friend class solve;
};

class solve{
    public:
        void sum(Arithmetic obj){
            cout<<"sum is: "<<obj.n1+obj.n2<<endl;
        }

        void divide(Arithmetic obj){
            cout<<"div is: "<<float(obj.n1)/obj.n2<<endl;
        }

        void greater(Arithmetic obj){
            obj.n1>=obj.n2?cout<<obj.n1<<" is greater"<<endl: cout<<obj.n2<<" is greater"<<endl;
        }

        void average(Arithmetic obj){
            cout<<"avg is "<<(obj.n1+obj.n2)/2.0<<endl;
        }
};

int main(){
    Arithmetic a1(2,3);
    solve s1;
    s1.sum(a1);
    s1.divide(a1);
    s1.greater(a1);
    s1.average(a1);
}