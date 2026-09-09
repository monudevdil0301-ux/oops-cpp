// #include <iostream>
// using namespace std;

// // Inline function
// inline int square(int n) {
//     return n * n;
// }

// // Function with default arguments
// int add(int a, int b = 10) {
//     return a + b;
// }

// // Function overloading
// int multiply(int a, int b) {
//     return a * b;
// }

// double multiply(double a, double b) {
//     return a * b;
// }

// int main() {

//     // Inline function
//     int num;

//     cout << "Enter a number to find square: ";
//     cin >> num;

//     cout << "Square = " << square(num) << endl;

//     // Default argument
//     cout << "\n--- Default Argument ---" << endl;
//     cout << "add(20) = " << add(20) << endl;
//     cout << "add(20, 30) = " << add(20, 30) << endl;

//     // Function overloading
//     cout << "\n--- Function Overloading ---" << endl;

//     cout << "multiply(5, 4) = "
//          << multiply(5, 4) << endl;

//     cout << "multiply(2.5, 4.0) = "
//          << multiply(2.5, 4.0) << endl;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> attendance = {85, 72, 91, 68, 80, 76};

//     cout << "Attendance percentage of 6 students:\n";
//     for (auto value : attendance) {
//         cout << value << "% ";
//     }
//     cout << endl;

//     int countAbove75 = 0;
//     for (auto value : attendance) {
//         if (value > 75) {
//             countAbove75++;
//         }
//     }

//     cout << "Number of students with attendance more than 75%: "
//          << countAbove75 << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<double> salaries = {35000, 58000, 85000, 52000, 90000, 48000};

//     cout << "1. Display all employee salaries\n";
//     for (auto salary : salaries) {
//         cout << salary << " ";
//     }
//     cout << endl;

//     double totalSalary = 0.0;
//     for (auto salary : salaries) {
//         totalSalary += salary;
//     }
//     cout << "2. Total salary of all employees: " << totalSalary << endl;

//     double highestSalary = salaries[0];
//     cout << "3. Employees having the highest salary:\n";
//     for (auto salary : salaries) {
//         if (salary > highestSalary) {
//             highestSalary = salary;
//         }
//     }

//     for (size_t i = 0; i < salaries.size(); ++i) {
//         if (salaries[i] == highestSalary) {
//             cout << "Employee " << i + 1 << ": " << salaries[i] << endl;
//         }
//     }

//     cout << "4. Employees having salary greater than 50000:\n";
//     for (size_t i = 0; i < salaries.size(); ++i) {
//         if (salaries[i] > 50000) {
//             cout << "Employee " << i + 1 << ": " << salaries[i] << endl;
//         }
//     }

//     double averageSalary = totalSalary / salaries.size();
//     cout << "5. Average salary: " << averageSalary << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            cout << "Amount deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    void showBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc("Alice", 5000.0);

    acc.deposit(1500.0);
    acc.withdraw(2000.0);
    acc.showBalance();

    return 0;
}
