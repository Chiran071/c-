#include <iostream>
using namespace std;

class Nepali{
    int rs,paisa;

    public:

        Nepali(){}

        Nepali(int r, int p){
            rs=r;
            paisa=p;
        }

        void show(){
            cout<<"nep rs: "<<rs<<endl<<"nep paisa: "<<paisa<<endl<<endl;
        }
};

class Indian{
    int rs,paisa;

    public:
        Indian(){}

        Indian(int r,int p){
            rs=r;
            paisa=p;
        }

        void show(){
            cout<<"indian rs: "<<rs<<endl<<"indian paisa: "<<paisa<<endl<<endl;
        }

        operator Nepali(){
            float nep;
            nep=(rs+paisa/100.0)*1.6;
            int nrs=nep;
            int np=(nep-nrs)*100;
            return(Nepali(nrs,np));
        }
};

int main(){
    Indian i(100,50);
    i.show();

    Nepali n;
    n=i;
    n.show();

}