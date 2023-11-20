#include "Clock.h"
#include <iostream>
#include <thread>
#include <chrono>

ClockHand::ClockHand(int max, ClockHand* next) : value(0), maximum(max), next_(next) {}

int ClockHand::advance() {
    value = (value + 1) % maximum;
    return value == 0 ? 0 : 1;
}

void ClockHand::setNext(ClockHand* next) {
    next_ = next;
}

void ClockHand::display() {
    if (value < 10) {
        std::cout << "0";
    }
    std::cout << value;
}

ClockHand* ClockHand::next() const {
    return next_;
}

Clock::Clock(int h, int m, int s) {
    seconds_ = new ClockHand(60, nullptr);
    minutes_ = new ClockHand(60, seconds_);
    hours_ = new ClockHand(24, minutes_);

    seconds_->setNext(minutes_);
    minutes_->setNext(hours_);
}

Clock::~Clock() {
    delete hours_;
    delete minutes_;
    delete seconds_;
}

void Clock::display() {
    hours_->display();
    std::cout << ":";
    minutes_->display();
    std::cout << ":";
    seconds_->display();
    std::cout << std::endl;
}

void Clock::tick() {
    if (seconds_->advance() == 0) {
        if (minutes_->advance() == 0) {
            hours_->advance();
        }
    }
}
