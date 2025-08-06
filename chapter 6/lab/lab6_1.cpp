// Create a class FIRST, SECOND, THIRD, FOURTH and AVERAGE with numeric attributes N1, N2, N3
// and N4 in respective FIRST, SECOND, THIRD and FOURTH. And SECOND, THIRD and FOURTH inherits
// from FIRST class. And AVERAGE inherits from SECOND, THIRD and FOURTH class. Use GETDATA( )
// and SHOWDATA( ) in all classes. AVERAGE class does not have any data members but must show
// average of all four numbers.

#include<iostream>
using namespace std;

class FIRST{
    protected:
        int N1;

    public:
        void GETDATA(){
            cout<<"enter a number"<<endl;
            cin>>N1;
        }

        void SHOWDATA(){
            cout<<"number is: "<<N1<<endl;
        }
};

class SECOND: virtual public FIRST{
    protected:
        int N2;

    public:
        void GETDATA(){
            FIRST::GETDATA();
            cout<<"enter a number"<<endl;
            cin>>N2;
        }

        void SHOWDATA(){
            FIRST::SHOWDATA();
            cout<<"number is: "<<N2<<endl;
        }
};

class THIRD: virtual public FIRST{
    protected:
        int N3;

    public:
        void GETDATA(){
            cout<<"enter a number"<<endl;
            cin>>N3;
        }

        void SHOWDATA(){
            cout<<"number is: "<<N3<<endl;
        }
};

class FOURTH: virtual public FIRST{
    protected:
        int N4;

    public:
        void GETDATA(){
            cout<<"enter a number"<<endl;
            cin>>N4;
        }

        void SHOWDATA(){
            cout<<"number is: "<<N4<<endl;
        }
};

class AVERAGE: public SECOND,public THIRD,public FOURTH{
    int avg;

    public:
        void GETDATA(){
            SECOND::GETDATA();
            THIRD::GETDATA();
            FOURTH::GETDATA();
        }

        void SHOWDATA(){
            SECOND::SHOWDATA();
            THIRD::SHOWDATA();
            FOURTH::SHOWDATA();

            cout<<"average: "<<(N1+N2+N3+N4)/4.0<<endl;

        }


};

int main(){
    AVERAGE avg;
    avg.GETDATA();
    avg.SHOWDATA();
    return 0;
}