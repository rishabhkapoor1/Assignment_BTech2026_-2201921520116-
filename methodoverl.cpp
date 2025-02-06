#include <iostream>

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math obj;
    std::cout << obj.add(5, 10) << std::endl;
    std::cout << obj.add(5.5, 2.2) << std::endl;
    std::cout << obj.add(1, 2, 3) << std::endl;
    return 0;
}
