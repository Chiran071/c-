#include<iostream>
using namespace std;
class number{
    private:
        int n1;
        int n2;
    public:
        number(int a, int b){
            n1=a;
            n2=b;
        }
        // void show(){
        //     cout<<"numbers are: "<<n1<<" and "<<n2<<endl;
        // }d

        friend void highest(number obj);

};

        void highest(number obj){
            obj.n1>=obj.n2?cout<<obj.n1<<" is highest"<<endl:cout<<obj.n2<<" is highest"<<endl;
        }


int main(){
    number num1(1,2);
    // num1.show();

    highest(num1);
   
}



