#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];

    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Deallocate memory

    return 0;
}