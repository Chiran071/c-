#include <iostream>
using namespace std;

class Nepali{
    private:
        float nrs;
    
    public:
        Nepali(){}

        Nepali(float rs){
            nrs=rs;
        }

        void showN(){
            cout<<"nepali: "<<nrs<<endl;
        }
};

class Indian{
    private:
        float irs;
    
    public:
        void getdata(){
            cout<<"insert indian rs: "<<endl;
            cin>>irs;
        }

        void showIc(){
            cout<<"indian rs: "<<irs<<endl;
        }

        operator Nepali(){
            float nrs;
            nrs=irs*1.60;
            return (Nepali(nrs));
        }
};

int main(){
    Indian i;
    i.getdata();
    i.showIc();

    Nepali N;
    N=i;
    N.showN();
    return 0;
}