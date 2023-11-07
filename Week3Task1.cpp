#include <iostream>

int* reserve_mem(int);

int main()
{
    int size = 10; 
    int* array = reserve_mem(size);
    std::cout << array;
    return 0;
}

int* reserve_mem(int size)
{
    int* array = new int[size];
    return array;
}
