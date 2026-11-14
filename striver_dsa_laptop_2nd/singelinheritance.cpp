#include <iostream>
using namespace std;

// Base Class
class Parent {
public:
    void displayParent() {
        cout << "This is the Parent class." << endl;
    }
};

// Derived Class
class Child : public Parent {
public:
    void displayChild() {
        cout << "This is the Child class." << endl;
    }
};

// Main Function
int main() {
    Child obj;

    obj.displayParent();
    obj.displayChild();

    return 0;
}