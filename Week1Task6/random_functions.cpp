// random_functions.cpp

#include <random>
#include "random_game.h"

int get_random_number(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> distribution(min, max);

    return distribution(gen);
}
