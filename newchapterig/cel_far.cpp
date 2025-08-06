#include<iostream>
using namespace std;

class fahranit{
    float fah;

    public:
        fahranit(){}

        fahranit(float f){
            fah=f;
        }

        void showF(){
            cout<<"temp in f: "<<fah<<endl;
        }
};

class celcius{
    float cel;

    public:
        celcius(){}

        celcius(float c){
            cel=c;
        }

        void showC(){
            cout<<"temp in celcius: "<<cel<<endl;
        }

        operator fahranit(){
            float fah;
            fah=(cel*9/5.0)+32;
            return (fahranit(fah));
        }
};

int main(){
    celcius c(1);
    c.showC();

    fahranit f;
    f=c;
    f.showF();
    return 0;
}