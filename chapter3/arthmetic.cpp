#include<iostream>
using namespace std;
class arithmetic{
    private:
        int a,b;
    
    public:

        arithmetic(){}

        arithmetic(int A, int B){
            a=A;
            b=B;
        }

        friend void sum(arithmetic &obj);
        friend void divide(arithmetic &obj);
        friend void subtract(arithmetic &obj);
};

void sum(arithmetic &obj){
    cout<<"sum is: "<<obj.a+obj.b<<endl;
}

void divide(arithmetic &obj){
    cout<<"div is: "<<float(obj.a)/obj.b<<endl;
}

void subtract(arithmetic &obj){
    cout<<"sub is: "<<obj.a-obj.b<<endl;
}

int main(){
    arithmetic nums(1,2);
    sum(nums);
    divide(nums);
    subtract(nums);
}
