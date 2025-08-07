#include<iostream>
using namespace std;

class indian{
    private:
        float irs;

    public:
        void getdata(){
            cout<<"insert ic: "<<endl;
            cin>>irs;
        }
        
        void show(){
            cout<<"bhartiya: "<<irs<<endl;
        }

        float getirs(){
            return irs;
        }
};

class Nepali{
    private:
        float nrs;

    public:
        Nepali(){}

        Nepali(indian i){
            float ic=i.getirs();
            nrs=ic*1.60;
        }

        void show(){
            cout<<"nepali: "<<nrs<<endl;

        }
};

int main(){
    indian i;
    Nepali n;
    i.getdata();
    n=i;
    i.show();
    n.show();
    return 0;
}
