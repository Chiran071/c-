//create an global array  ar with 10 float values create a return by refrence function change which will take index as a parameter and return the array value. IN the main function ask for index of array. use return type refrence to change the value of array index
#include<iostream>
using namespace std;
float arr[20] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
float &change(int n) {
    return arr[n];
}
int main() {
    int n;
    float value;
    cout << "enter a index and value" << endl;
    cin >> n >> value;
    change(n) = value;
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}