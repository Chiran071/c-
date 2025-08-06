#include<iostream>
using namespace std;

class Nepali{
    private:
        float NC;
    
    public:
        Nepali (){}

        Nepali(float Ic){
            NC=Ic;
        }

        void show(){
            cout<<"nepali: "<<NC<<endl;
        }
};

int main(){
    float IC=75.44;
    Nepali N;
    N=IC;
    N.show();
    return 0;
}