#include<iostream>
using namespace std;
class xyz{
    private:
        int x;
    public:
        xyz(){
            x=0;
        }
        xyz(int a){
            x=a;
        }
        xyz(xyz &obj){
            x=obj.x;
        }
        void show(){
            cout<<x<<endl;
        }
        ~xyz(){
            cout<<"Finish";
        }
};
int main(){
    xyz a;
    a.show();

    xyz b(7);
    b.show();

    xyz c(b);
    c.show();

    xyz d(b);
    d.show();

    return 0;
}
