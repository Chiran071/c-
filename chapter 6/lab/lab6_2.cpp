// Create a class ABSTRACT with two pure virtual functions INSERT( ) and DISPLAY( ). Create two
// classes CONCRETE1 and CONCRETE2 that inherits from ABSTRACT class with any three data

#include <iostream>
using namespace std;

class ABSTRACT{
    public:
        virtual void INSERT()=0;
        virtual void DISPLAY()=0;
};

class CONCRETE1: public ABSTRACT{
    private:
        int n1,n2,n3,n4;
    
    public:
        CONCRETE1(){}

        void insert(){
            
        }
};

class CONCRETE2: public ABSTRACT{
    private:
        int x1,x2,x3,x4;
    
    public:
        CONCRETE2(){}

        CONCRETE2(int x1,int x2,int x3, int x4){
            this->x1=x1;
            this->x2=x2;
            this->x3=x3;
            this->x4=x4;
        }
};

int main(){
    CONCRETE1 c1(1,2,3,4);
    CONCRETE2 c2(5,6,7,8);
}
