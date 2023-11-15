#include "Car.h"

Car::Car(std::string plate, int top_speed) {
    this->plate = plate;
    this->top_speed = top_speed;
    this->speed = 0;
    this->distance = 0;
}

void Car::accelerate(int acceleration) {
    if (acceleration > 0) {
        speed = speed + acceleration;
        if (speed > top_speed) {
            speed = top_speed;
        }
    }
    else if (acceleration < 0) {
        speed = speed + acceleration;
        if (speed < 0) {
            speed = 0;
        }
    }
}

void Car::travel(int hours) {
    distance = speed * hours + distance;
}

void Car::get_info() const {
    std::cout << "Plate: " << plate << ", Top speed: " << top_speed << " km/h, Current Speed: " << speed
        << " km/h, Distance traveled: " << distance << " km" << std::endl;
}

const std::string& Car::getPlate() const {
    return plate;
}

int Car::getDistance() const {
    return distance;
}
