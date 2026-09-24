// #include <iostream>
// using namespace std;

// class Product
// {
//     int productId;
//     string name;
//     float price;

// public:
//     Product(int id, string n, float p)
//     {
//         productId = id;
//         name = n;
//         price = p;
//     }

//     Product comparePrice(const Product &p)
//     {
//         if (price > p.price)
//             return *this;
//         else
//             return p;
//     }

//     void display()
//     {
//         cout << "Product ID: " << productId << endl;
//         cout << "Name: " << name << endl;
//         cout << "Price: " << price << endl;
//     }
// };

// int main()
// {
//     Product p1(101, "Laptop", 55000);
//     Product p2(102, "Mobile", 30000);

//     Product higher = p1.comparePrice(p2);

//     cout << "Product with Higher Price:" << endl;
//     higher.display();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class BankAccount
// {
//     int accountNumber;
//     string customerName;
//     float balance;

// public:
//     BankAccount(int acc, string name, float bal)
//     {
//         accountNumber = acc;
//         customerName = name;
//         balance = bal;
//     }

//     friend void compareBalance(const BankAccount &a1,
//                                const BankAccount &a2);
// };

// void compareBalance(const BankAccount &a1,
//                     const BankAccount &a2)
// {
//     if (a1.balance > a2.balance)
//         cout << "Higher Balance: " << a1.customerName << endl;
//     else if (a2.balance > a1.balance)
//         cout << "Higher Balance: " << a2.customerName << endl;
//     else
//         cout << "Both have equal balance." << endl;
// }

// int main()
// {
//     BankAccount b1(1001, "Rahul", 50000);
//     BankAccount b2(1002, "Aman", 75000);

//     compareBalance(b1, b2);

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Patient
// {
//     int patientId;
//     string patientName;

//     static int activePatients;

// public:
//     Patient(int id, string name)
//     {
//         patientId = id;
//         patientName = name;
//         activePatients++;
//     }

//     ~Patient()
//     {
//         activePatients--;
//     }

//     static void showActivePatients()
//     {
//         cout << "Active Patients: " << activePatients << endl;
//     }
// };

// int Patient::activePatients = 0;

// int main()
// {
//     Patient p1(101, "Rahul");
//     Patient p2(102, "Aman");

//     Patient::showActivePatients();

//     {
//         Patient p3(103, "Rohit");

//         Patient::showActivePatients();
//     } // p3 destroyed here

//     cout << "After local object is destroyed:" << endl;
//     Patient::showActivePatients();

//     return 0;
// }  
// #include <iostream>
// using namespace std;

// class University
// {
// private:
//     string universityName;

// public:
//     University(string name)
//     {
//         universityName = name;
//     }

//     class Department
//     {
//         string departmentName;
//         int studentCount;

//     public:
//         Department(string name, int count)
//         {
//             departmentName = name;
//             studentCount = count;
//         }

//         void display(University &u)
//         {
//             cout << "University: " << u.universityName << endl;
//             cout << "Department: " << departmentName << endl;
//             cout << "Student Count: " << studentCount << endl;
//         }
//     };
// };

// int main()
// {
//     University u("ABES Engineering College");

//     University::Department d("Computer Science", 120);

//     d.display(u);

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Employee
// {
//     int employeeId;
//     string name;
//     float salary;

// public:
//     // Default constructor
//     Employee()
//     {
//         employeeId = 0;
//         name = "Unknown";
//         salary = 0;
//     }

//     // Parameterized constructor
//     Employee(int id, string n, float s)
//     {
//         employeeId = id;
//         name = n;
//         salary = s;
//     }

//     // Copy constructor
//     Employee(const Employee &e)
//     {
//         employeeId = e.employeeId;
//         name = e.name;
//         salary = e.salary;
//     }

//     // Const member function
//     void display() const
//     {
//         cout << "Employee ID: " << employeeId << endl;
//         cout << "Name: " << name << endl;
//         cout << "Salary: " << salary << endl;
//     }

//     void updateSalary(float newSalary)
//     {
//         salary = newSalary;
//     }
// };

// int main()
// {
//     const Employee e1(101, "Rahul", 50000);

//     cout << "Constant Employee Object:" << endl;
//     e1.display();

//     // e1.updateSalary(60000); 
//     // Error: const object cannot call non-const function

//     Employee e2 = e1;  // Copy constructor

//     cout << "\nCopied Employee Object:" << endl;
//     e2.display();

//     e2.updateSalary(60000);

//     cout << "\nAfter Salary Update:" << endl;
//     e2.display();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class ResultAnalyzer;

// class StudentResult
// {
// private:
//     int rollNo;
//     string name;
//     float marks1, marks2, marks3;

//     static int totalStudents;

// public:
//     StudentResult(int roll, string n, float m1, float m2, float m3)
//     {
//         rollNo = roll;
//         name = n;
//         marks1 = m1;
//         marks2 = m2;
//         marks3 = m3;

//         totalStudents++;
//     }

//     friend class ResultAnalyzer;

//     static void showTotalStudents()
//     {
//         cout << "Total Students: " << totalStudents << endl;
//     }

//     ~StudentResult()
//     {
//         cout << "StudentResult object destroyed for "
//              << name << endl;
//     }
// };

// int StudentResult::totalStudents = 0;

// class ResultAnalyzer
// {
// public:
//     void analyze(StudentResult &s)
//     {
//         float total = s.marks1 + s.marks2 + s.marks3;
//         float percentage = total / 3;

//         cout << "Roll No: " << s.rollNo << endl;
//         cout << "Name: " << s.name << endl;
//         cout << "Total Marks: " << total << endl;
//         cout << "Percentage: " << percentage << "%" << endl;

//         if (s.marks1 >= 33 &&
//             s.marks2 >= 33 &&
//             s.marks3 >= 33)
//         {
//             cout << "Result: PASS" << endl;
//         }
//         else
//         {
//             cout << "Result: FAIL" << endl;
//         }
//     }
// };

// int main()
// {
//     StudentResult s1(101, "Rahul", 80, 75, 90);
//     StudentResult s2(102, "Aman", 60, 25, 70);

//     ResultAnalyzer r;

//     cout << "Student 1 Result:" << endl;
//     r.analyze(s1);

//     cout << "\nStudent 2 Result:" << endl;
//     r.analyze(s2);

//     cout << endl;
//     StudentResult::showTotalStudents();

//     return 0;
// }
