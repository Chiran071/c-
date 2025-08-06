// Lab 2 : Create a class SOLVE with 2 numeric attributes. Use parameterized constructor to
// initialize and AVERAGE(), SUM( ), MULTIPLY(), SUBTRACT(), DIVISION() and LOWEST(
// ).
#include<iostream>
using namespace std;
class solve{
    private:
        int x,y;

    public:
        solve(int a,int b){
            x=a;
            y=b;
        }
        void average(){
            cout<<"average is: "<<(x+y)/2.0<<endl;
        }
        void sum(){
            cout<<"sum is: "<<x+y<<endl;
        }
        void multiply(){
            cout<<"multiplication is: "<<x*y<<endl;
        }
        void subtract(){
            cout<<"sub is: "<<x-y<<endl;
        }
        void division(){
            cout<<"division is: "<<float(x)/y<<endl;
        }
        void lowest(){
            x<=y?cout<<x<<" is lowest"<<endl:cout<<y<<" is lowest"<<endl; 
        }

};
int main(){
    solve s1(1,2);
    s1.sum();
    s1.subtract();
    s1.division();
    s1.multiply();
    s1.average();
    s1.lowest();
}

