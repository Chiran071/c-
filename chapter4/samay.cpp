#include<iostream>
using namespace std;

class samay{
    int hr;
    int min;
    int sec;

    public:
        samay(){}

        samay(int hr, int min, int sec){
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }

        // void operator ++(){
        //     sec++;
        //     if(sec==60){
        //         min++;
        //         sec=0;
        //         if(min==60){
        //             hr++;
        //             min=0;
        //         }
        //     }
        // }

        friend void operator --(samay &s,int);

        void show(){
            cout<<"hr: "<<hr<<"min: "<<min<<"sec: "<<sec<<endl;
        }
};

void operator --(samay &s,int){
    s.sec--;
    if(s.sec==-1){
        s.sec=59;
        s.min--;
    }
    if(s.min=-1){
        s.hr--;
        s.min=59;
    }
}

int main(){
    samay n1(2,0,0);
    n1--;
    n1.show();
}