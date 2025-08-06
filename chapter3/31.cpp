// Create a class NUMBER with NUM1, NUM2 numeric attributes. Use member function
// INSERT() to input data and use DISPLAY( ) method to show its properties. Create
// another friend class SOLVE with methods SUM( ), SUBTRACT( ), MULTIPLICATION(),
// DIVISION( ) and MEAN( ) which uses NUMBER objects.

#include<iostream>
using namespace std;
class number{
    private:
        int num1,num2;
    public:

        void insert(int n1, int n2){
            num1=n1;
            num2=n2;
        }

        void display(){
            cout<<"num1: "<<num1<<endl<<"Num2: "<<num2<<endl;
        }

        friend class calc;

};

class calc{
    public:
        void sum(number obj){
            cout<<"sum is: "<<obj.num1+obj.num2<<endl;
        }

        void subtract(number obj){
            cout<<"sub is: "<<obj.num1-obj.num2<<endl;
        }

        void multiplication(number obj){
            cout<<"multi is: "<<obj.num1*obj.num2<<endl;
        }

        void division(number obj){
            cout<<"div is: "<<float(obj.num1)/obj.num2<<endl;
        }

        void mean(number obj){
            cout<<"mean is: "<<float(obj.num1+obj.num2)/2<<endl;
        }       
};

int main(){
    number obj1;
    obj1.insert(1,2);
    calc c1;
    c1.sum(obj1);
    c1.subtract(obj1);
    c1.multiplication(obj1);
    c1.division(obj1);
    c1.mean(obj1);
}