#include <iostream>

int nolla(int list[], int len);
int print_list(int list[], int len);

int main()
{
    int list[] = {1, 2, 3};
    int len = sizeof(list) / sizeof(list[0]);

    print_list(list, len);

    // Taulukon pituus parametrina, koska taulukko parametri ei pidä itsessään tietoa sen pituudesta.
    nolla(list, len);

    print_list(list, len);

    return 0;
}

int nolla(int list[], int len)
{
    for (int i = 0; i < len; i++) 
    {
        list[i] = 0;
    }
    return 0;
}

int print_list(int list[], int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << list[i];
    }
    std::cout << std::endl;
    return 0;
}
