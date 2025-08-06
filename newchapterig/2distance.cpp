#include <iostream>
using namespace std;

class Distance{
    int feet;
    int inch;

    private:
        friend istream &operator >>(istream &put, Distance &d1);
        friend ostream &operator <<(ostream &show, Distance &d1);
};

istream &operator >>(istream &put,Distance &d1){
    cout<<"enter feet and inch"<<endl;
    put>>d1.feet>>d1.inch;
    return put;
}

ostream &operator <<(ostream &show, Distance &d1){
    show<<"feet: "<<d1.feet<<endl<<"inch: "<<d1.inch;
    return show;
}

int main(){
    Distance d1;
    cin>>d1;
    cout<<d1;
}

