#include "Vehicles.h"
#include <iostream>


Vehicle::Vehicle(int speed, int year, double mass)
    : topSpeed(speed), yearOfManufacture(year), weight(mass) {}

Car::Car(int speed, int year, double mass, int doors, int tires)
    : Vehicle(speed, year, mass), numberOfDoors(doors), numberOfTires(tires) {}

PassengerCar::PassengerCar(int speed, int year, double mass, int doors, int tires, int passengers)
    : Car(speed, year, mass, doors, tires), maximumPassengers(passengers) {}

Truck::Truck(int speed, int year, double mass, int doors, int tires, double load)
    : Car(speed, year, mass, doors, tires), maximumLoad(load) {}

Airplane::Airplane(int speed, int year, double mass, int flightAltitude)
    : Vehicle(speed, year, mass), maximumFlightAltitude(flightAltitude) {}

Ship::Ship(int speed, int year, double mass, int depth)
    : Vehicle(speed, year, mass), maximumDepth(depth) {}

int main() {
    Vehicle Ajoneuvo_Yliluokka(200, 2023, 1250);
    std::cout << "Vehicle - Top Speed: " << Ajoneuvo_Yliluokka.topSpeed << ", Year: " << Ajoneuvo_Yliluokka.yearOfManufacture << ", Weight: " << Ajoneuvo_Yliluokka.weight << std::endl;

    Car Auto_Yliluokka(200, 2023, 1250, 4, 4);
    std::cout << "Car - Top Speed: " << Auto_Yliluokka.topSpeed << ", Year: " << Auto_Yliluokka.yearOfManufacture << ", Weight: " << Auto_Yliluokka.weight << ", Doors: " << Auto_Yliluokka.numberOfDoors << ", Tires: " << Auto_Yliluokka.numberOfTires << std::endl;

    PassengerCar Henkilöauto(200, 2023, 1250, 4, 4, 5);
    std::cout << "PassengerCar - Top Speed: " << Henkilöauto.topSpeed << ", Year: " << Henkilöauto.yearOfManufacture << ", Weight: " << Henkilöauto.weight << ", Doors: " << Henkilöauto.numberOfDoors << ", Tires: " << Henkilöauto.numberOfTires << ", Passengers: " << Henkilöauto.maximumPassengers << std::endl;

    Truck Rekka(150, 2023, 2500, 2, 6, 5000);
    std::cout << "Truck - Top Speed: " << Rekka.topSpeed << ", Year: " << Rekka.yearOfManufacture << ", Weight: " << Rekka.weight << ", Doors: " << Rekka.numberOfDoors << ", Tires: " << Rekka.numberOfTires << ", Maximum Load: " << Rekka.maximumLoad << std::endl;

    Airplane Lentokone(500, 2023, 20000, 40000);
    std::cout << "Airplane - Top Speed: " << Lentokone.topSpeed << ", Year: " << Lentokone.yearOfManufacture << ", Weight: " << Lentokone.weight << ", Maximum Flight Altitude: " << Lentokone.maximumFlightAltitude << std::endl;

    Ship Laiva(50, 2023, 50000, 100);
    std::cout << "Ship - Top Speed: " << Laiva.topSpeed << ", Year: " << Laiva.yearOfManufacture << ", Weight: " << Laiva.weight << ", Maximum Depth: " << Laiva.maximumDepth << std::endl;

    return 0;
}
