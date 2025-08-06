#include <iostream>
using namespace std;

class SANKHYA {
    int num1, num2, num3;
public:
    void HIGHEST() {
        int max = num1;
        if(num2 > max) max = num2;
        if(num3 > max) max = num3;
        cout << "Highest: " << max << endl;
    }
    void LOWEST() {
        int min = num1;
        if(num2 < min) min = num2;
        if(num3 < min) min = num3;
        cout << "Lowest: " << min << endl;
    }
    // Friend functions declaration
    void GETDATA();
    void AVERAGE();
};

// Definition of GETDATA outside the class
void SANKHYA::GETDATA(){
    cout << "Enter three numbers: ";
    cin >> num1 >>num2 >> num3;
}

// Definition of AVERAGE outside the class
void SANKHYA::AVERAGE() {
    float avg = (num1 + num2 + num3) / 3.0;
    cout << "Average: " << avg << endl;
}

int main() {
    SANKHYA s;
    s.GETDATA();
    s.AVERAGE();
    s.HIGHEST();
    s.LOWEST();
    return 0;
}