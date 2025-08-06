#include<iostream>
using namespace std;
class Numeric{
    private:                                    
        int x;
    public:

        Numeric(){
            x=0;
        }

        Numeric(int X){
            x=X;
        }
        
        friend void evenOdd(Numeric obj);
        friend void positiveNegative(Numeric obj);

};      

void evenOdd(Numeric obj){
    (obj.x%2==0)?cout<<obj.x<<" is even"<<endl:cout<<obj.x<<" is odd"<<endl;
}

void positiveNegative(Numeric obj){
    (obj.x>=0)?cout<<obj.x<<" is positive"<<endl:cout<<obj.x<<" is negative"<<endl;
}

int main(){
    Numeric num1(3);

    evenOdd(num1);

    positiveNegative(num1);
}


