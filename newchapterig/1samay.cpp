#include <iostream>
using namespace std;

class samay{
    int hr,min,sec;

    public:
        samay(){}

        samay(int hr, int min, int sec){
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }

        friend bool operator >=(samay s1,samay s2);

        void operator +=(samay s1){
            sec+=s1.sec;
            if(sec>=60){
                sec%=60;
                min++;
            }

            min+=s1.min;
            if(min>=60){
                min%=60;
                hr++;
            }

            hr+=s1.hr;
        }

        void show(){
            cout<<"hr: "<<hr<<endl<<"min: "<<min<<endl<<"sec: "<<sec<<endl<<endl;
        }
};

bool operator >=(samay s1, samay s2){
    int time1=s1.hr*60*60+s1.min*60+s1.sec;
    int time2=s2.hr*60*60+s2.min*60+s1.sec;
    if(time1>=time2)
        return true;
    return false;
}

int main(){
    samay s1(2,38,38),s2(2,35,35);

    if(s1>=s2){
        cout<<"s1 is greather or equal to s2"<<endl;
    }

    s1+=s2;

    s1.show();
}