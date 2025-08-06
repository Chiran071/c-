#include<iostream>
using namespace std;
class matrix{
    int m[2][3];

    public:

        void get(){
            for(int i=0;i<2;i++){
                for(int j=0;j<3;j++){
                    cout<<"enter element: "<<i+1<<j+1<<endl;
                    cin>>m[i][j];
                }
            }
        }

        void show(){
            for(int i=0;i<2;i++){
                for(int j=0;j<3;j++){
                    cout<<m[i][j]<<"\t";
                }
                cout<<endl;
            }
            cout<<endl;
        }

        
        friend void operator ++(matrix &obj,int);

        void operator --(){
            for(int i=0;i<2;i++){
                for(int j=0;j<3;j++){
                    m[i][j]--;
                }
            }
        }

        friend void operator -(matrix &obj);

        

};
void operator ++(matrix &obj,int){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            obj.m[i][j]++;
        }
    }
}

void operator -(matrix &obj){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            obj.m[i][j]*=-1;
        }
    }
}

int main(){
    matrix m1;
    m1.get();
    cout<<"orginal matrix: "<<endl;
    m1.show();
    m1++;
    cout<<"++ matrix: "<<endl;
    m1.show();

    cout<<"--matrix: "<<endl;
    --m1;
    m1.show();

    cout<<"-matrix: "<<endl;
    -m1;
    m1.show();
}
