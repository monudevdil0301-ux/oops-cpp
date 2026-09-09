// #include <iostream>
// #include <cstdlib>
// using namespace std;
// void callbyvalue(int n){
//     n=20;
//     cout<<"value in cv:"<<n<<endl;

// }
// void callbyrefrence(int& n){
//     n=90;
//     cout<<"value in refrence"<<n<<endl;
// }
// int main(){
//     int number;
//     cout<<"enter the number";
//     cin>>number;
//     callbyvalue(number);
//     cout<<"original number"<<number<<endl;
//     callbyrefrence(number);
//     cout<<"original number"<<number<<endl;
// }
// #include<iostream>
// #include<cstdlib>
// using namespace std;
// inline int addition(int x,int y){
//     return x*y;
// }
// int main(){
//     int a=20;
//     int b=48;
//     cout<<addition(a,b)<<endl;
// }
// #include <iostream>
// #include<unordered_map>

// using namespace std;
// int main(){
//     unordered_map<int,int> m ;
//     m[1] = 5 ;
//     m[2] = 10 ;
//     m[3] = 15 ;
//     m[4] = 20 ;
//     for(auto me : m){
//         cout << me.first << " " << me.second << endl; 
//     }
// }
// #include <iostream>
// #include <string>
// class Student {
// public:
//     std::string name;
//     int age;
//     Student() {
//         name = "Unknown";
//         age = 0;
//     }
//     Student(std::string n) {
//         name = n;
//         age = 0;
//     }
//     Student(std::string n, int a) {
//         name = n;
//         age = a;
//     }
//     void display() {
//         std::cout << name << " " << age << std::endl;
//     }
// };
// int main() {
//     Student s1;                  
//     Student s2("Alice");        
//     Student s3("Bob", 20);      
//     s1.display();
//     s2.display();
//     s3.display();
//     return 0;
// }

#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x) {
    x = x + 10;
    cout << "Inside Call by Value: " << x << endl;
}

// Call by Reference
void callByReference(int &x) {
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}

// Call by Address
void callByAddress(int *x) {
    *x = *x + 10;
    cout << "Inside Call by Address: " << *x << endl;
}

int main() {
    int a = 10;
    int b = 10;
    int c = 10;

    cout << "Initial Values:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "\n--- Call by Value ---" << endl;
    callByValue(a);
    cout << "After function: a = " << a << endl;

    cout << "\n--- Call by Reference ---" << endl;
    callByReference(b);
    cout << "After function: b = " << b << endl;

    cout << "\n--- Call by Address ---" << endl;
    callByAddress(&c);
    cout << "After function: c = " << c << endl;

    return 0;
}