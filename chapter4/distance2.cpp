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

        friend distance1 operator +(distance1 d1,distance1 d2);
};

distance1 operator +(distance1 d1,distance1 d2){
    distance1 temp;
    temp.feet=d1.feet+d2.feet+(d1.inch+d2.inch)/12;
    temp.inch=(d1.inch+d2.inch)%12;
    return temp;
}

int main(){
    distance1 d1(5,11),d2(0,1),d3;
    d3=d1+d2;
    d3.show();

}