#include <iostream>
#include <random>

int get_random_number(int min, int max);
int ask_for_answer(int random);
bool check_for_match(int random, int number, int loops);

int main()
{
    int random_number;
    int answer_number;
    bool gamestate = false;
    int loop_number = 0;
    
    random_number = get_random_number(1, 100);
    std::cout << "superhidden number: " << random_number << std::endl;

    while (gamestate == false)
    {
        loop_number++;
        answer_number = ask_for_answer(random_number);
        gamestate = check_for_match(random_number, answer_number, loop_number);
    }
    return 0;
}

int get_random_number(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> distribution(min, max);

    return distribution(gen);
}

int ask_for_answer(int random)
{
    int answer;
    std::cout << "Arvaa luku (1-100): ";
    std::cin >> answer;
    return answer;
}

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