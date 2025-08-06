#include<iostream>
using namespace std;

class celcuis{
    private:
        float c;
    
    public:
        void getC(){
            cout<<"insert celcius"<<endl;
            cin>>c;
        }

        void showC(){
            cout<<"celcius is: "<<c<<endl;
        }

        operator float(){
            float fah;
            fah=(c*9/5.0)+32;
            return fah;
        }
};

int main(){
    celcuis c;
    c.getC();
    float fah;

    fah=c;
    c.showC();
    cout<<"fah: "<<fah<<endl;
}