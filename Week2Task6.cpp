#include <iostream>

int count_charLen(char* string, int len);

int main() 
{
    char string[] = "esimerkki";  
    char* string_ptr = string;  

    int length = 0;

    length = count_charLen(string_ptr, length);

    std::cout << "Pituus: " << length << std::endl;

    return 0;
}

int count_charLen(char* string, int len)
{
    while (*string != '\0')
    {
        len++;  
        string++;  
    }
    return len;
}
