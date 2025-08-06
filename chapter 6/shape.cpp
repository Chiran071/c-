#include<iostream>
using namespace std;

class shape{
    protected:
        int dimension;

    public:
        virtual void calculateArea()=0;

        void getDimension(){
            cout<<"enter dimenstion"<<endl;
            cin>>dimension;
        }
};

class square: public shape{
    public:
        void calculateArea(){
            cout<<"area of square is: "<<dimension*dimension<<endl;
        }
};

class circle: public shape{
    public:
        void calculateArea(){
            cout<<"area of circle is: "<<3.14*dimension*dimension<<endl;
        }
};

int main(){
    square s1;
    s1.getDimension();
    s1.calculateArea();

    circle c1;
    c1.getDimension();
    c1.calculateArea();
    return 0;
}