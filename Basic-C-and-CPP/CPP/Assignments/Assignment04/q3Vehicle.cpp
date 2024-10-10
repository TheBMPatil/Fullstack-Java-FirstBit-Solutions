#include <iostream>
#include <string.h>
using namespace std;

struct Vehicle
{
    virtual void start() { cout << "\nVehicle Start"; }
    virtual void stop() { cout << "\nVehicle Stop"; }
    virtual void brake() { cout << "\nVehicle Brake"; }
};

struct Car : public Vehicle
{
    void start() { cout << "\nCar Start"; }
    void brake() { cout << "\nCar Brake"; }
};

struct Bus : public Vehicle
{
    void start() { cout << "\nBus Start"; }
    void brake() { cout << "\nBus Brake"; }
};

struct Bike : Vehicle
{
    void start() { cout << "\nBike Start"; }
    void stop() { cout << "\nBike Stop"; }
};

int main()
{
    Vehicle *vehicles[5];
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            vehicles[i] = new Car;
        }
        else if (i % 3 == 0)
        {
            vehicles[i] = new Bus;
        }
        else
        {
            vehicles[i] = new Bike;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        vehicles[i]->start();
        vehicles[i]->brake();
        vehicles[i]->stop();
        cout << endl;
    }

    // Car car;
    // Bus Bus;
    // Bike bike;

    // car.start();
    // Bus.start();
    // bike.start();

    // car.stop();
    // Bus.stop();
    // bike.stop();

    // car.brake();
    // Bus.brake();
    // bike.brake();

    return 0;
}
