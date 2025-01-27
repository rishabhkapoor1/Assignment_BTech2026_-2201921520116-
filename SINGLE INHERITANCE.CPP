#include <iostream>
using namespace std;

class Base {
public:
    void displayBase() {
        cout << "This is the Base class." << endl;
    }
};

class Derived : public Base {
public:
    void displayDerived() {
        cout << "This is the Derived class." << endl;
    }
};

int main() {
    Derived obj;
    obj.displayBase();
    obj.displayDerived();
    return 0;
}
