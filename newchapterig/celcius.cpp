#include<iostream>
using namespace std;

class fahrenheit{
    private:
        float fah;
    
    public:
        fahrenheit(){}

        fahrenheit(float c){
            fah=(c*9/5.0)+32;
        }

        void show(){
            cout<<"fahrenheit: "<<fah<<endl;
        }
};

int main(){
    int celc=1;
    fahrenheit f;
    f=celc;
    f.show();
    return 0;
}