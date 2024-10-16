#include <iostream>
#include <string.h>
using namespace std;

struct Vehicle
{
    virtual void start() { cout << "\nVehicle Start"; }
    virtual void stop() { cout << "\nVehicle Stop"; }
    virtual void breaking() { cout << "\nVehicle Break"; }
};

struct Car : public Vehicle
{
    void start() { cout << "\nCar Start"; }
    void breaking() { cout << "\nCar Break"; }
};

struct Truck : public Vehicle
{
    void start() { cout << "\nTruck Start"; }
    void breaking() { cout << "\nTruck Break"; }
};

struct Bike : Vehicle
{
    void start() { cout << "\nBike Start"; }
    void stop() { cout << "\nBike Stop"; }
};

int main()
{
    Car car;
    Truck truck;
    Bike bike;

    // car.start();
    // truck.start();
    // bike.start();

    // car.stop();
    // truck.stop();
    // bike.stop();

    // car.breaking();
    // truck.breaking();
    // bike.breaking();

    Vehicle *v;

    v = &car;
    v->breaking();
    v->start();
    v->stop();

    v = &truck;
    v->breaking();
    v->start();
    v->stop();

    v = &bike;
    v->breaking();
    v->start();
    v->stop();

    return 0;
}
