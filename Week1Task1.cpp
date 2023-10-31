#include <iostream>
#include <random>

int get_random_number(int min, int max);
int ask_for_answer();
bool check_for_match(int random, int answer);

int main()
{
    int random_number;
    int answer_number;
    bool answer_match;
    bool gamestate = false;


    std::cout << "Pelataan Kiinalaista Numeropeli\xC3\xA4!\n";

    while (gamestate == false)
    {
        random_number = get_random_number(1, 100);
        std::cout << "superhidden number: " << random_number << std::endl;
        answer_number = ask_for_answer();
        answer_match = check_for_match(random_number, answer_number);
        if (answer_match == false)
        {
            std::cout << "Voitin, minun on " << random_number << "!\n";
        }
        else
        {
            std::cout << "Vastasit oikein ja voitit!\n";
        }
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

int ask_for_answer()
{
    int answer;
    std::cout << "Anna luku: ";
    std::cin >> answer;
    return answer;
}

bool check_for_match(int random, int answer)
{
    return random == answer;
}
