#include<iostream>
using namespace std;
class student{
    private:
        int rollno;
        string name;
    
    public:
        void getdata(){
            cout<<"enter roll no and name"<<endl;
            cin>>rollno;
            getline(cin,name);
        }

        void showdata(){
            cout<<"Roll no: "<<rollno<<endl<<"name is: "<<name<<endl<<endl;
        }
};
int main(){
    int n;
    cout<<"how many data you wanna enter?"<<endl;
    cin>>n;
    student *std= new student[n];
    //student std[20];

    for(int i=0;i<n;i++){
        std[i].getdata();
    }

    for(int i=0;i<n;i++){
        std[i].showdata();
    }

    delete[] std;

}