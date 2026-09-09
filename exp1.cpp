// #include <iostream>
// using namespace std;
// class Student{
// public:
//     int rollNo;string name;float marks;
//     void input(){
//         cout << "Enter Roll Number: ";cin >> rollNo;
//         cout << "Enter Name: ";cin >> name;
//         cout << "Enter Marks: ";cin >> marks;
//     }char grade(const Student &stu){
//         float marks = stu.marks;
//          if (marks >= 90)
//             return 'A';
//         else if (marks >= 80)
//             return 'B';
//         else if (marks >= 70)
//             return 'C';
//         else if (marks >= 60)
//             return 'D';
//         else
//             return 'F';
//     }void display(){
//         cout << "\nStudent Info" << endl;
//         cout << "Roll Number: " << rollNo << endl;
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//         cout << "Grade: " << grade(*this) << endl;
//     }
// };

// int main()
// {
//     Student s;
//     s.input();
//     s.display();
//     return 0;
// }
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}