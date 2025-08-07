#include <iostream>
#include<cmath>

using namespace std;

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

        float getpolarr(){
            return r;
        }
        float getpolardeg(){
            return deg;
        }



};


class rec{
    float x,y;

    public:
        rec(){}
        rec(polar p){
            float r=p.getpolarr();
            float deg=p.getpolardeg();
            x=r*cos(deg);
            y=r*sin(deg);
            
        }

        void show(){
            cout<<"rectangle: "<<"("<<x<<","<<y<<")"<<endl;
        }


};


int main(){
    polar p(20,120);
    rec r;
    p.show();
    r=p;
    r.show();
    return 0;

}