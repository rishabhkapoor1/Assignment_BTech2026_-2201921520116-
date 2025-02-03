#include <iostream>
using namespace std;

class A {
public:
    virtual void f(int x) { cout << "A: " << x * 2 << endl; }
    virtual void g() = 0;
};

class B : public A {
public:
    void f(int x) override { cout << "B: " << x * 3 << endl; }
    void g() override { cout << "B::g" << endl; }
};

class C : public A {
public:
    void f(int x) override { cout << "C: " << x * 4 << endl; }
    void g() override { cout << "C::g" << endl; }
};

class D : public B {
public:
    void f(int x) override { cout << "D: " << x * 5 << endl; }
    void g() override { cout << "D::g" << endl; }
};

int main() {
    A* p1 = new B();
    A* p2 = new C();
    A* p3 = new D();
    p1->f(2); p1->g();
    p2->f(2); p2->g();
    p3->f(2); p3->g();
    delete p1;
    delete p2;
    delete p3;
    return 0;
}
