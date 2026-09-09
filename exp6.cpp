#include <iostream>
using namespace std;

class Demo {
private:
    int value;

public:
    // Default constructor
    Demo() {
        value = 0;
        cout << "Default Constructor called." << endl;
    }

    // Parameterized constructor
    Demo(int v) {
        value = v;
        cout << "Parameterized Constructor called." << endl;
    }

    // Copy constructor
    Demo(const Demo &obj) {
        value = obj.value;
        cout << "Copy Constructor called." << endl;
    }

    void display() {
        cout << "Value = " << value << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for value " << value << endl;
    }
};

int main() {

    cout << "Creating object 1:\n";
    Demo obj1;
    obj1.display();

    cout << "\nCreating object 2:\n";
    Demo obj2(100);
    obj2.display();

    cout << "\nCreating object 3 using copy constructor:\n";
    Demo obj3 = obj2;
    obj3.display();

    cout << "\nEnd of main function.\n";

    return 0;
}