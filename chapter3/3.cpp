#include<iostream>
using namespace std;
class number {
  private:
    int x, y;
  public:
    void sum() {
        cout << "sum is: " << x + y << endl;
    }

    void greater() {
        if(x >= y)
            cout << x << " is greater" << endl;
        else
            cout << y << " is greater" << endl;
    }

    void multiply();
    void getdata();

};

void number::getdata() {
    cout << "enter two numbers" << endl;
    cin >> x >> y;
}

void number::multiply() {
    cout << "multiply is: " << x*y << endl;
}

int main() {
    number a;
    a.getdata();
    a.sum();
    a.multiply();
    a.greater();
}