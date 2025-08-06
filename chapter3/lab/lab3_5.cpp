#include <iostream>
#include <iomanip>
using namespace std;

class Student {
    private: 
        string Name;
        string faculty;
        int semester;
        static string collegeName;
        static string location;
        static int count;

    public:
        void getstd() {
            cout << "Enter Name, Faculty, and Semester: " << endl;
            cin.ignore();
            getline(cin, Name);
            getline(cin, faculty);
            cin >> semester;
        }

        void showstd() {
            
            
            cout << setfill(' ') << setw(12) << left << count << setw(12) << left << Name << setw(12) << left << faculty << setw(12) << left << semester << endl;
        }

        Student() {
            count++;
        }

        static void showCollege() {
            cout << "College Name: " << collegeName << endl;
            cout << "Location: " << location << endl;
        }

        static void showTotalStudents() {
            cout << "Total Students: " << count << endl;
        }
};

string Student::collegeName = "Lumbini City";
string Student::location = "Nepal";
int Student::count = 0;

int main() {
    

    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    Student students[numStudents];
    
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details for student " << (i + 1) << ":" << endl;
        students[i].getstd();
    }

    Student::showCollege();
    cout << setfill('_') << setw(80) << "" << endl;
    cout << setfill(' ') << setw(30) << left << "S.NO" << setw(12) << left << "Name" << setw() << left << "Faculty" << setw(12) << left << "Semester" << endl;
    for (int i = 0; i < numStudents; i++) {
        students[i].showstd();
    }
    cout << setfill('_') << setw(80) << "" << endl;

    Student::showTotalStudents();
    
    return 0;
}