#include <iostream>

void reverse_array(int*, int);

int main() {
    int array[] = { 1, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Alkuperäinen taulukko: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    reverse_array(array, size);

    std::cout << "Käännetty taulukko: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void reverse_array(int* array, int size) {
    int start = 0; 
    int end = size - 1;
    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}
