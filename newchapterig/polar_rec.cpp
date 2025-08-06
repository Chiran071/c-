#include <iostream>
#include<cmath>

using namespace std;

class rec{
    float x,y;

    public:
        rec(){}
        rec(float a, float b){
            x=a;
            y=b;
        }

        void show(){
            cout<<"rectangle: "<<"("<<x<<","<<y<<")"<<endl;
        }


};

class polar{
    float r,deg;

    public:

        polar(){}
        polar(float r,float d){
            this->r=r;
            deg=d;
        }

        void show(){
            cout<<"polar: "<<"("<<r<<","<<deg<<")"<<endl;
        }

        operator rec(){
            float x=r*cos(deg);
            float y=r*sin(deg);
            return rec(x,y);
        }

};

int main(){
    polar p(2,120);
    p.show();

    rec r;
    r=p;
    r.show();

}