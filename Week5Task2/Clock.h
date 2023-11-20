#ifndef CLOCKSYSTEM_H
#define CLOCKSYSTEM_H

class ClockHand {
public:
    ClockHand(int max, ClockHand* next);

    int advance();

    void setNext(ClockHand* next);

    void display();

    ClockHand* next() const;

private:
    int value;
    int maximum;
    ClockHand* next_;
};

class Clock {
public:
    Clock(int h, int m, int s);

    ~Clock();

    void display();

    void tick();

private:
    ClockHand* hours_;
    ClockHand* minutes_;
    ClockHand* seconds_;
};

#endif