#ifndef CLOCK_H
#define CLOCK_H

#include <iostream>
#include <iomanip>

class ClockHand {
public:
    int value;
    ClockHand(int initialValue);
    void display() const;
};

class Clock {
private:
    ClockHand* hours;
    ClockHand* minutes;
    ClockHand* seconds;

public:
    Clock(int h, int m, int s);
    ~Clock();
    void display() const;
    void tick();
};

#endif 

