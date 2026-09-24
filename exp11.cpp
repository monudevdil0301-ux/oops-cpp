#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    double price;

public:
    Product() : productId(0), productName(""), price(0.0) {}

    Product(int id, string name, double p) : productId(id), productName(name), price(p) {}

    double calculatePrice() const {
        return price;
    }

    double calculatePrice(double discountPercentage) const {
        if (discountPercentage < 0) {
            discountPercentage = 0;
        }
        if (discountPercentage > 100) {
            discountPercentage = 100;
        }
        return price * (1 - (discountPercentage / 100.0));
    }

    double calculatePrice(double discountPercentage, double deliveryCharge) const {
        return calculatePrice(discountPercentage) + deliveryCharge;
    }

    void display() const {
        cout << left << setw(10) << productId
             << setw(20) << productName
             << fixed << setprecision(2) << setw(12) << price << "\n";
    }

    int getProductId() const {
        return productId;
    }

    string getProductName() const {
        return productName;
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    int n;

    cout << "Enter the number of products: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of products must be positive.\n";
        return 1;
    }

    Product* products = new Product[n];

    for (int i = 0; i < n; i++) {
        int id;
        string name;
        double pr;

        cout << "\nEnter details for Product " << (i + 1) << ":\n";
        cout << "Product ID: ";
        cin >> id;
        cout << "Product Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Price: ";
        cin >> pr;

        products[i] = Product(id, name, pr);
    }

    cout << "\nProduct Details:\n";
    cout << left << setw(10) << "ID"
         << setw(20) << "Name"
         << setw(12) << "Price" << "\n";
    cout << string(42, '-') << "\n";

    for (int i = 0; i < n; i++) {
        products[i].display();
    }

    cout << "\nPrice calculation using overloaded functions:\n";
    for (int i = 0; i < n; i++) {
        double discount = 10.0;
        double delivery = 50.0;

        cout << "\nProduct " << products[i].getProductId() << " ("
             << products[i].getProductName() << ")\n";
        cout << "Original price: " << products[i].calculatePrice() << "\n";
        cout << "After " << discount << "% discount: " << products[i].calculatePrice(discount) << "\n";
        cout << "After " << discount << "% discount + delivery charge: "
             << products[i].calculatePrice(discount, delivery) << "\n";
    }

    delete[] products;
    products = nullptr;

    return 0;
}
