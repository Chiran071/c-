// Design a class LandMeasure that reads Ropani,Ana,Paisa and Dam as data members.
// Write a member function to pass two objects of type LandMeasure and return their sum.
// (16 Ana=1 Ropani, 4 Paisa=1 Ana, 4 Dam=1 Paisa).

#include<iostream>
using namespace std;

class landmeasure{
    private:
        int ana;
        int ropani;
        int paisa;
        int dam;
    
    public:
        
    landmeasure(){
        ana=0;
        ropani=0;
        paisa=0;
        dam=0;
    }

    landmeasure(int Ana, int Ropani, int Paisa, int Dam){
        ana=Ana;
        ropani=Ropani;
        paisa=Paisa;
        dam=Dam;
    }

    void display(){
        cout<<ana<<" ana"<<endl<<ropani<<" ropani"<<endl<<paisa<<" paisa"<<endl<<dam<<" dam"<<endl;
    }

    landmeasure add(landmeasure a,landmeasure b){
        landmeasure temp;
        int undam=a.dam+b.dam;
        temp.dam=(a.dam+b.dam)%4;
        int unpaisa=a.paisa+b.paisa + (undam)/4;
        temp.paisa=unpaisa%4;
        int unana=(a.ana+b.ana)+(unpaisa)/4;
        temp.ana=unana%4;
        


    }
};