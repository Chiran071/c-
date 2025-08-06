#include<iostream>
using namespace std;
class coordinate{
    private:
        float x,y;
    public:
        void getdata(){

        }

        void showdata(){

        }

        void sum(coordinate c1,coordinate c2){
            x=c1.x+c2.x;
            y=c1.y+c2.y;
        }

        coordinate add(coordinate c1, coordinate c2){
            coordinate temp;
            temp.x=c1.x+c2.x;
            temp.y=c1.y+c2.y;
            return temp;
        }

    friend coordinate addition(coordinate &c1, coordinate &c2);

};

coordinate addition(coordinate &c1,coordinate &c2){
                coordinate temp;
            temp.x=c1.x+c2.x;
            temp.y=c1.y+c2.y;
            return temp;
}

int main(){
    coordinate c1,c2,c3,c4,c5;
    c1.getdata();
    c2.getdata();

    c3.sum(c1,c2);

    c4=c4.add(c1,c2);
    c5=c5.addition(c1,c2);

    c3.show();
    c4.show();
    c5.show();
    return 0;
}
