#include <iostream>

int* array; // Taulukko on globaali muuttuja
int size;   // Taulukon koko on globaali muuttuja

void reserve_mem();

void read_values();

void print_values();

void reverse_array();


int main() {
    reserve_mem();

    read_values();

    print_values();

    reverse_array();

    std::cout << "Taulukon sisältö kääntämisen jälkeen: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array; // Vapauta muistialue

    return 0;
}

void reserve_mem() {
    std::cout << "Syötä taulukon koko: ";
    std::cin >> size;

    array = new int[size];
}

void read_values() {
    for (int i = 0; i < size; i++) {
        std::cout << "Syötä kokonaisluku listaan[" << i << "]: ";
        std::cin >> array[i];
    }
}

void reverse_array() {
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

void print_values() {
    std::cout << "Taulukon sisältö ennen kääntämistä: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}