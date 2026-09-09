#include <iostream>
using namespace std;

class Student {
private:
    int marks;

    // Static member
    static int totalStudents;

public:
    Student(int m) {
        marks = m;
        totalStudents++;
    }

    // Static member function
    static void displayTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }

    // Friend function
    friend void displayMarks(Student s);
};

// Definition of static member
int Student::totalStudents = 0;

// Friend function definition
void displayMarks(Student s) {
    cout << "Student Marks: " << s.marks << endl;
}

int main() {

    Student s1(85);
    Student s2(90);
    Student s3(78);

    displayMarks(s1);
    displayMarks(s2);
    displayMarks(s3);

    Student::displayTotalStudents();

    return 0;
}