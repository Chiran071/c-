#include <iostream>
#include <string>
using namespace std;

class RESULT {
private:
    int ROLLNO;
    string NAME;
    int MATH, SCI, COMPUTER;

public:
    void INSERTMARKS() {
        cout << "Enter Roll No, Name, Math marks, Science marks, Computer marks : "<<endl;
        cin >> ROLLNO >> NAME >> MATH >> SCI >> COMPUTER;
        // If NAME may contain spaces, use getline for NAME after reading ROLLNO:
        // cin >> ROLLNO;
        // cin.ignore();
        // getline(cin, NAME, ' ');
        // cin >> MATH >> SCI >> COMPUTER;
    }

    void SHOWRESULT() {
        cout << "Roll No: " << ROLLNO << endl;
        cout << "Name: " << NAME << endl;
        if (MATH >= 35 && SCI >= 35 && COMPUTER >= 35)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main(){
    RESULT student;
    student.INSERTMARKS();
    student.SHOWRESULT();
    return 0;
}