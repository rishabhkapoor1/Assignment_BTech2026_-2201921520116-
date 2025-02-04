#include <iostream>
using namespace std;

class Engine {
public:
    int horsepower;
    Engine(int hp) : horsepower(hp) {}
    void showPower() {
        cout << "Engine Horsepower: " << horsepower << endl;
    }
};

class Car {
private:
    Engine* engine;
public:
    Car(Engine* eng) : engine(eng) {}
    void showDetails() {
        engine->showPower();
    }
};

int main() {
    Engine eng(150);
    Car car(&eng);
    car.showDetails();
    return 0;
}
