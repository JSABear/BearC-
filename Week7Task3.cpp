#include <iostream>

class Horse {
private:
    double hoofSize;

public:
    Horse(double hoof) : hoofSize(hoof) {}

    void setHoofSize(double hoof) {
        hoofSize = hoof;
    }

    double getHoofSize() const {
        return hoofSize;
    }

    bool operator<(const Horse& other) const {
        return hoofSize < other.hoofSize;
    }
};

template <typename T>
void sort(T* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] < array[j + 1]) {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    Horse horses[] = { Horse(15.0), Horse(12.5), Horse(18.2), Horse(14.8), Horse(16.7) };
    int horsesSize = sizeof(horses) / sizeof(horses[0]);

    sort(horses, horsesSize);

    std::cout << "Sorted horses by hoof size: ";
    for (int i = 0; i < horsesSize; ++i) {
        std::cout << horses[i].getHoofSize() << " ";
    }
    std::cout << std::endl;

    return 0;
}