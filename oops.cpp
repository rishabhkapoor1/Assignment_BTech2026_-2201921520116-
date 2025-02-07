#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    Student(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << "\nAge: " << age << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s1("John", 20, 85.5);
    s1.display();
    return 0;
}
