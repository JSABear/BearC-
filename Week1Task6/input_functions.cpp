// input_functions.cpp

#include <iostream>
#include "random_game.h"

int ask_for_answer(int random, int min, int max)
{
    int answer;

    while (true)
    {
        std::cout << "Arvaa luku (" << min << " - " << max << "): ";
        std::cin >> answer;

        if (answer >= min && answer <= max) {
            return answer;
        }
        else {
            std::cout << "Virheellinen syöte. Anna luku väliltä " << min << " - " << max << ".\n";
        }
    }
}
