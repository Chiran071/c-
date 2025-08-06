#include<iostream>
using namespace std;
class check{
    private:
        int a,b;
    
    public:
        check(){}

        check(int x, int y){
            a=x;
            b=y;
        }

        void show(){
            cout<<"a is: "<<a<<endl<<"b is: "<<b<<endl;
        }

        friend void change(check *obj);

};

void change(check *obj){
    int temp=obj->a;
        obj->a=obj->b;
        obj->b=temp;
}

int main(){
    check c1(1,2);
    change(&c1);
    c1.show();   

}