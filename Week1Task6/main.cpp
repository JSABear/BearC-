// main.cpp

#include <iostream>
#include "random_game.h"

int main()
{
    int random_number;
    int answer_number;
    bool gamestate = false;
    int loop_number = 0;
    int number_1;
    int number_2;

    std::cout << "Määrittele lukujen väli.\n" << "Pienin luku:\n";
    std::cin >> number_1;
    std::cout << "Suurin luku:\n";
    std::cin >> number_2;
    std::cout << "Annettu väli on: " << number_1 << " - " << number_2 << "\n";

    random_number = get_random_number(number_1, number_2);
    std::cout << "superhidden number: " << random_number << std::endl;

    while (gamestate == false)
    {
        loop_number++;
        answer_number = ask_for_answer(random_number, number_1, number_2);
        gamestate = check_for_match(random_number, answer_number, loop_number);
    }
    return 0;
}
