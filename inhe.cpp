#include <iostream>

class A {
protected:
    int dataA;
public:
    A(int val) : dataA(val) {
        std::cout << "Constructor of A\n";
    }
    virtual void show() {
        std::cout << "Class A: dataA = " << dataA << std::endl;
    }
    virtual ~A() {
        std::cout << "Destructor of A\n";
    }
};

class B : public A {
protected:
    int dataB;
public:
    B(int valA, int valB) : A(valA), dataB(valB) {
        std::cout << "Constructor of B\n";
    }
    void show() override {
        std::cout << "Class B: dataA = " << dataA << ", dataB = " << dataB << std::endl;
    }
    ~B() {
        std::cout << "Destructor of B\n";
    }
};

class C : public B {
private:
    int dataC;
public:
    C(int valA, int valB, int valC) : B(valA, valB), dataC(valC) {
        std::cout << "Constructor of C\n";
    }
    void show() override {
        std::cout << "Class C: dataA = " << dataA << ", dataB = " << dataB << ", dataC = " << dataC << std::endl;
    }
    ~C() {
        std::cout << "Destructor of C\n";
    }
};

int main() {
    A* obj = new C(10, 20, 30);
    obj->show();
    delete obj;
    return 0;
}
