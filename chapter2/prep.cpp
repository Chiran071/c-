#include <iostream>
using namespace std;

int main() {
    int boys, girls;
    cout << "Enter the number of boys and girls "<<endl;
    cin >> boys>>girls;
    int total = boys + girls;
    float per = (float(girls) / total) * 100;
    cout << "Percentage of girls: " << per << "%" << endl;
    return 0;
}