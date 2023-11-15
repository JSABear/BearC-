#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include <random>

class Car {
public:
    Car(std::string plate, int top_speed);

    void accelerate(int acceleration);
    void travel(int hours);
    void get_info() const;
    const std::string& getPlate() const;
    int getDistance() const;

private:
    std::string plate;
    int top_speed;
    int speed;
    int distance;
};

#endif // CAR_H
