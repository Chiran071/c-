#include<iostream>
using namespace std;

class matrix{
    int m[3][3];

    public:

        void get(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<"enter element "<<i+1<<j+1<<endl;
                    cin>>m[i][j];
                }
            }
        }

        void show(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<m[i][j]<<"\t";
                }
                cout<<endl;
            }
        }

        friend matrix operator -(matrix m1,matrix m2);

};

matrix operator -(matrix m1,matrix m2){
    matrix temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp.m[i][j]=m1.m[i][j]-m2.m[i][j];
        }
    }
    return temp;
}

int main(){
    matrix m1,m2,m3;
    m1.get();
    m2.get();
    m3=m1-m2;
    m3.show();
}