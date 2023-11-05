#include <iostream>

int main()
{
    int intSize;
    unsigned int uIntSize;
    float floatSize;
    double doubleSize;
    char charSize;
    bool boolSize;

   
    int array[6] = {sizeof intSize, sizeof uIntSize, sizeof floatSize, sizeof doubleSize, sizeof charSize, sizeof boolSize};

    for (int i = 0; i < 6; i++) {
        std::cout << "Size of element " << i << ": " << array[i] << " bytes" << std::endl;
    }

    return 0;
}