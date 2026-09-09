#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student(int m = 0) {
        marks = m;
    }

    // Pass object as argument and return object
    Student addMarks(Student s) {
        Student result;
        result.marks = marks + s.marks;
        return result;
    }

    void display() {
        cout << "Marks = " << marks << endl;
    }
};

int main() {
    Student s1(50);
    Student s2(30);

    cout << "Student 1: ";
    s1.display();

    cout << "Student 2: ";
    s2.display();

    // Passing s2 as an object and receiving an object
    Student s3 = s1.addMarks(s2);

    cout << "Total Marks: ";
    s3.display();

    return 0;
}