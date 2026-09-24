#include <iostream>
#include <string>

class Student {
private:
    int rollNo;
    std::string name;
    double cgpa;

    class Address {
    private:
        std::string city, state;
    public:
        Address(std::string c, std::string s) : city(c), state(s) {}
        void display() const { std::cout << "Address: " << city << ", " << state << "\n"; }
    };
    Address address;

public:
  
    Student(int r, std::string n, std::string c, std::string s) 
        : rollNo(r), name(n), cgpa(0.0), address(c, s) {}
    Student(int r, std::string n, double g, std::string c, std::string s) 
        : rollNo(r), name(n), cgpa(g), address(c, s) {}

    void updateCGPA(double cgpa) { 
        this->cgpa = cgpa;
    }

    void displayInfo() const {
        std::cout << "Roll: " << rollNo << " | Name: " << name << " | CGPA: " << cgpa << "\n";
        address.display();
        std::cout << "-----------------------------------\n";
    }
};

int main() {
    
    Student students[5] = {
        Student(101, "Alice", "Mumbai", "MH"),
        Student(102, "Bob", 8.5, "Bangalore", "KA"),
        Student(103, "Charlie", "Delhi", "DL"),
        Student(104, "David", 9.1, "Hyderabad", "TG"),
        Student(105, "Eva", "Chennai", "TN")
    };

    std::cout << "--- Initial Records ---\n";
    for (int i = 0; i < 5; ++i) students[i].displayInfo();

   
    students[0].updateCGPA(7.9);
    students[2].updateCGPA(8.8);

    std::cout << "\n--- Updated Records ---\n";
    for (int i = 0; i < 5; ++i) students[i].displayInfo();

    return 0;
}
