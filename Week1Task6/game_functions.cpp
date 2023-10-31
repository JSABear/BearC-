// game_functions.cpp

#include <iostream>
#include "random_game.h"

bool check_for_match(int random, int number, int loops)
{
    if (random > number)
    {
        std::cout << "Liian pieni!\n";
    }
    else if (random < number)
    {
        std::cout << "Liian suuri!\n";
    }
    else if (random == number)
    {
        std::cout << "Oikein! Teit " << loops << " arvausta.";
        return true;
    }
    return false;
}
