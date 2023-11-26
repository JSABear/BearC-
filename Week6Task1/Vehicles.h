#ifndef VEHICLES_H
#define VEHICLES_H

class Vehicle {
public:
    int topSpeed;
    int yearOfManufacture;
    double weight;

    Vehicle(int speed, int year, double mass);
};

class Car : public Vehicle {
public:
    int numberOfDoors;
    int numberOfTires;

    Car(int speed, int year, double mass, int doors, int tires);
};

class PassengerCar : public Car {
public:
    int maximumPassengers;

    PassengerCar(int speed, int year, double mass, int doors, int tires, int passengers);
};

class Truck : public Car {
public:
    double maximumLoad;

    Truck(int speed, int year, double mass, int doors, int tires, double load);
};

class Airplane : public Vehicle {
public:
    int maximumFlightAltitude;

    Airplane(int speed, int year, double mass, int flightAltitude);
};

class Ship : public Vehicle {
public:
    int maximumDepth;

    Ship(int speed, int year, double mass, int depth);
};

#endif // VEHICLES_H
