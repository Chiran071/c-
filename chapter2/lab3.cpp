// wap two function with same name and check with one parameter, if parameter is interger check for even or odd. if parameter is characer check for vowel or consonant.
// wap to create 3 functions with samee name solve them, two parameter perform division, three perform sum and 4 parameter perform multiplication
#include <iostream>
using namespace std;

void check(int num) {
    if (num % 2 == 0) {
        cout << num << " is Even" << endl;
    } else {
        cout << num << " is Odd" << endl;
    }
}

void check(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a Vowel" << endl;
    } else {
        cout << ch << " is a Consonant" << endl;
    }
}

int main() {
    int num;
    char ch;

    cout << "Enter an integer: ";
    cin >> num;
    

    cout << "Enter a character: ";
    cin >> ch;
    check(num);
    check(ch);

    return 0;
}