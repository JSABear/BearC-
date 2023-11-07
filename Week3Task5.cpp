#include <iostream>

int* reserve_mem(int);
void read_values(int*, int);
void reverse_array(int*, int);
void print_values(const int*, int);

int main() {
    int size;

    std::cout << "Syötä taulukon koko: ";
    std::cin >> size;

    int* array = reserve_mem(size);

    read_values(array, size);

    std::cout << "Taulukon sisältö ennen kääntämistä: ";
    print_values(array, size);

    reverse_array(array, size);

    std::cout << "Taulukon sisältö kääntämisen jälkeen: ";
    print_values(array, size);

    delete[] array;

    return 0;
}

int* reserve_mem(int size) {
    int* array = new int[size];
    return array;
}

void read_values(int* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Syötä kokonaisluku listaan[" << i << "]: ";
        std::cin >> array[i];
    }
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

void print_values(const int* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
