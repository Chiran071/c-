#include<iostream>
#include<cstring>


using namespace std;

class STRING{
    char str[50];

    public:

        STRING(){}

        STRING(char *S){
            strcpy(str,S);

        }

        STRING operator +(STRING s){
            STRING temp;
            strcpy(temp.str,str);
            strcat(temp.str,s.str);
            return temp;
        }

        void show(){
            cout<<"string is: "<<str<<endl;
        }
        
};  

int main(){
    STRING s1("hello"), s2(" world"),s3;
    s3=s1+s2;
    s3.show();
    return 0;
}