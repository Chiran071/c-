// Create a class PAHILO with numeric attributes A,B,C. Create another class DOSRO with
// numeric attributes D,E. Create another class TESRO with numeric attributes F. Use any
// method/constructor to initialize value. Create a friend function of above three classes
// which will show average of all six attributes.

#include<iostream>
using namespace std;
class dosro;
class tesro;

class pahilo{
    private:
        int a,b,c;
    public:

        pahilo(int A,int B, int C){
            a=A;
            b=B;
            c=C;
        }

        friend void average(pahilo p,dosro d, tesro t);
};

class dosro{
    private:
        int d,e;
    public:

        dosro(int D, int E){
            d=D;
            e=E;
        }

        friend void average(pahilo p,dosro d, tesro t);
};

class tesro{
    private:
        int f;
    
    public:

        tesro(int F){
            f=F;
        }

        friend void average(pahilo p,dosro d, tesro t);
};

void average(pahilo p,dosro d, tesro t){
    float sum=float(p.a+p.b+p.c+d.d+d.e+t.f);
    cout<<"average is: "<<sum/6<<endl;

}

int main(){
    pahilo p1(1,2,3);
    dosro d1(4,5);
    tesro t1(7);
    average(p1,d1,t1);
}