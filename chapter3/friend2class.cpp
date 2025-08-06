#include<iostream>
using namespace std;
class first;

class second{
    private:
        int n2;
    public:
        second(){
            n2=0;
        }
    
        second(int N2){
            n2=N2;
        }

        friend void sum(first &f, second &s);
};

class first{
    private:
        int n1;
    public:
        first(){
            n1=0;
        }

        first(int N1){
            n1=N1;
        }

        friend void sum(first &f, second &s);
};



void sum(first &f, second &s){
    cout<<"sum is: "<<f.n1+s.n2<<endl;
}

int main(){
    first f1(1);
    second s1(2);
    sum(f1,s1);
}