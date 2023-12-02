#include <iostream>

template <typename T>
void sort(T* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {

    float floatArray[] = { 1.1, 2.2, 2.1, 4.0, 3.1 };
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);

    sort(floatArray, floatSize);

    std::cout << "Sorted float array: ";
    for (int i = 0; i < floatSize; ++i) {
        std::cout << floatArray[i] << " ";
    }
    std::cout << std::endl;

    int intArray[] = { 5, 2, 4, 1, 3 };
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    sort(intArray, intSize);

    std::cout << "Sorted int array: ";
    for (int i = 0; i < intSize; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
