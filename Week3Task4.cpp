#include <iostream>

void print_values(const int* , int );

int main() {
    int array[] = { 1, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);

    print_values(array, size);

    return 0;
}

void print_values(const int* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}