#include <iostream>
#include <string>
using namespace std;
class Car {
public:
    Car(const string& brand, const string& model) : brand(brand), model(model) {}
    virtual ~Car() {}
    virtual void displayInfo() const = 0;
    // ���麯������������������ʵ�֣����ֶ�̬��
protected:
    string brand;
    string model;
};
class Truck : virtual public Car {
// �����ࣺTruck����̳��� Car
public:
    Truck(const string& brand, const string& model, double loadCapacity)
        : Car(brand, model), loadCapacity(loadCapacity) {}
    void displayInfo() const override {
        cout << "Truck - Brand: " << brand << ", Model: " << model << ", Load Capacity: " << loadCapacity << " tons" << endl;
    }
protected:
    double loadCapacity;
};
class Bus : virtual public Car {
// �����ࣺBus����̳��� Car
public:
    Bus(const string& brand, const string& model, int passengerCapacity)
        : Car(brand, model), passengerCapacity(passengerCapacity) {}
    void displayInfo() const override {
        cout << "Bus - Brand: " << brand << ", Model: " << model << ", Passenger Capacity: " << passengerCapacity << endl;
    }
protected:
    int passengerCapacity;
};
class Pickup : public Truck, public Bus {
// �����ࣺPickup���̳��Ի����Ϳͳ�
public:
    Pickup(const string& brand, const string& model, double loadCapacity, int passengerCapacity)
        : Car(brand, model), Truck(brand, model, loadCapacity), Bus(brand, model, passengerCapacity) {}
    void displayInfo() const override {
        cout << "Pickup - Brand: " << brand << ", Model: " << model << ", Load Capacity: " << loadCapacity << " tons, Passenger Capacity: " << passengerCapacity << endl;
    }
};
int main() {
    Pickup P("Pbrand", "Pmodel", 1.5, 5);
    P.displayInfo();
    Truck T("Tbrand", "Tmodel", 3);
    T.displayInfo();
    Bus B("Bbrand", "Bmodel", 30);
    B.displayInfo();
    return 0;
}