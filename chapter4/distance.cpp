#include<iostream>
using namespace std;

class distance1{
    int feet;
    int inch;

    public:
        distance1(){}

        distance1(int feet,int inch){
            this->feet=feet;
            this->inch=inch;
        }

        void show(){
            cout<<feet<<"ft "<<inch<<"inch"<<endl;
        }

        void operator ++(){
            inch++;
            if(inch=12){
                inch=0;
                feet++;
            }
        }
};

int main(){
    distance1 d1(5,11);
    ++d1;
    d1.show();

}