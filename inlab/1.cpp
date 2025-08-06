// Create a class TEACHER with attributes TID, NAME, ADDRESS and SUBJECT. Use default
// constructor to intialize and SHOW( ) to display.
#include<iostream>
using namespace std;
class teacher{
    private:
        int TID;
        string NAME;
        string ADDRESS;
        string SUBJECT;
    public:
        
        teacher(){
            TID=12;
            NAME="ram";
            ADDRESS="manigram";
            SUBJECT="maths";
        }

        void SHOW(){
            cout<<"id is: "<<TID<<endl<<"name is: "<<NAME<<endl<<"address is: "<<ADDRESS<<endl<<"subject is: "<<SUBJECT<<endl;
        }

};
int main(){
    teacher t1;
    t1.SHOW();
}