#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void changeGear(int a) = 0;
    virtual void speedUp(int a) = 0;
    virtual void applyBrakes(int a) = 0;
    virtual ~Vehicle() {}
};

class Bicycle : public Vehicle {
private:
    int speed = 0;
    int gear = 0;

public:
    void changeGear(int newGear) override {
        gear = newGear;
    }

    void speedUp(int increment) override {
        speed += increment;
    }

    void applyBrakes(int decrement) override {
        speed -= decrement;
    }

    void printStates() {
        cout << "Bicycle present state: speed: " << speed << " gear: " << gear << endl;
    }
};

class Bike : public Vehicle {
private:
    int speed = 0;
    int gear = 0;

public:
    void changeGear(int newGear) override {
        gear = newGear;
    }

    void speedUp(int increment) override {
        speed += increment;
    }

    void applyBrakes(int decrement) override {
        speed -= decrement;
    }

    void printStates() {
        cout << "Bike present state: speed: " << speed << " gear: " << gear << endl;
    }
};

int main() {
    Bicycle bicycle;
    bicycle.changeGear(2);
    bicycle.speedUp(3);
    bicycle.applyBrakes(1);
    bicycle.printStates();

    Bike bike;
    bike.changeGear(1);
    bike.speedUp(4);
    bike.applyBrakes(3);
    bike.printStates();

    return 0;
}
