// Create a class merotime that consists of integer member for hours, minute and seconds. The constructor should be initialized the data to 0. Another constructor should initialize it to fixed values. Write member function displaymerotime ( ) that should display in merotime format hr:min:sec. Also write another member function Addmerotime( ) that should add two objects of the type merotime passed as argument. WAP to add two merotime objects and display their
// result.

#include<iostream>
using namespace std;

class merotime{
    private:
        int hours;
        int min;
        int sec;

    public:
        merotime(){
            hours=0;
            min=0;
            sec=0;
        }

        merotime(int Hours, int Min, int Sec){
            hours=Hours;
            min=Min;
            sec=Sec;
        }

        void dispalymerotime(){
            cout<<"merotime is "<<hours<<" : "<<min<<" : "<<sec<<endl;
        }

        merotime add(merotime t1, merotime t2){
            merotime temp;
            temp.sec=(t1.sec+t2.sec)%60;
            int unmin=(t1.min+t2.min)+(t1.sec+t2.sec)/60;
            temp.min=(unmin)%60;
            temp.hours=t1.hours+t2.hours+unmin/60;
            return temp;
        }
};

int main(){
    merotime merotime1(1,50,50);
    merotime merotime2(1,20,20);
    merotime merotime3;
    merotime3=merotime3.add(merotime1,merotime2);
    merotime3.dispalymerotime();
    return 0;

}