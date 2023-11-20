#include "clock.h"

ClockHand::ClockHand(int initialValue) : value(initialValue) {}

void ClockHand::display() const {
    std::cout << std::setfill('0') << std::setw(2) << value;
}

Clock::Clock(int h, int m, int s) : hours(new ClockHand(h)), minutes(new ClockHand(m)), seconds(new ClockHand(s)) {}

Clock::~Clock() {
    delete hours;
    delete minutes;
    delete seconds;
    std::cout << "Clock destroyed" << std::endl;
}

void Clock::display() const {
    hours->display();
    std::cout << ":";
    minutes->display();
    std::cout << ":";
    seconds->display();
    std::cout << std::endl;
}

void Clock::tick() {
    seconds->value++;
    if (seconds->value == 60) {
        seconds->value = 0;
        minutes->value++;
        if (minutes->value == 60) {
            minutes->value = 0;
            hours->value++;
            if (hours->value == 24) {
                hours->value = 0;
            }
        }
    }
}