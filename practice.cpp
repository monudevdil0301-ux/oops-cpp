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
#include <iostream>
using namespace std;

class Employee
{
    int employeeId;
    string name;
    float salary;

public:
    // Default constructor
    Employee()
    {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized constructor
    Employee(int id, string n, float s)
    {
        employeeId = id;
        name = n;
        salary = s;
    }

    // Copy constructor
    Employee(const Employee &e)
    {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    // Const member function
    void display() const
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    void updateSalary(float newSalary)
    {
        salary = newSalary;
    }
};

int main()
{
    const Employee e1(101, "Rahul", 50000);

    cout << "Constant Employee Object:" << endl;
    e1.display();

    // e1.updateSalary(60000); 
    // Error: const object cannot call non-const function

    Employee e2 = e1;  // Copy constructor

    cout << "\nCopied Employee Object:" << endl;
    e2.display();

    e2.updateSalary(60000);

    cout << "\nAfter Salary Update:" << endl;
    e2.display();

    return 0;
}