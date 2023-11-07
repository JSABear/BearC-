#include <iostream>

void read_values(int*, int);

int main() {
    int size;

    std::cout << "Syötä taulukon koko: ";
    std::cin >> size;

    int* t = new int[size]; 

    read_values(t, size); 
    std::cout << "Taulukon sisältö: ";

    for (int i = 0; i < size; i++) {
        std::cout << t[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void read_values(int* t, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "Syötä kokonaisluku listaan[" << i << "]: ";
        std::cin >> t[i];
    }
}