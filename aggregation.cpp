#include <iostream>

class Engine {
public:
    void start() {
        std::cout << "Engine started" << std::endl;
    }
};

class Car {
private:
    Engine* engine;
public:
    Car(Engine* eng) : engine(eng) {}
    void drive() {
        engine->start();
        std::cout << "Car is driving" << std::endl;
    }
};

int main() {
    Engine eng;
    Car myCar(&eng);
    myCar.drive();
    return 0;
}
