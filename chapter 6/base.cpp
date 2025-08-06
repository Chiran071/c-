#include<iostream>
using namespace std;

class base{
    public:
         virtual void show(){
            cout<<"Namaste"<<endl;
        }

        virtual ~base(){
            cout<<"base is destroyed"<<endl;
        }
};

class derived: public base{
    public:
        void show(){
            cout<<"hello"<<endl;
        }

        ~derived(){
            cout<<"derived is destyoed"<<endl;
        }


};

int main(){
    base *ptr;

    base b;
    ptr=&b;
    ptr->show();

    derived d;
    ptr=&d;
    ptr->show();
    return 0;
}