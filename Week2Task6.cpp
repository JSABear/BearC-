#include <iostream>

int count_charLen(char* string, int len);

int main() 
{
    char string[] = "Hello";  // Esimerkki merkkijono
    char* string_ptr = string;  // Alusta osoitin mjonoon

    int length = 0;

    length = count_charLen(string_ptr, length);

    std::cout << "Pituus: " << length << std::endl;

    return 0;
}

int count_charLen(char* string, int len)
{
    while (*string != '\0')
    {
        len++;  // Lisää pituutta jokaisen merkin kohdalla
        string++;  // Siirry seuraavaan merkkiin
    }
    return len;
}