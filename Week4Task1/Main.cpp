#include <iostream>
#include <vector>
#include <algorithm>
#include "Car.h"

struct PodiumEntry {
    std::string plate;
    int distance;

    PodiumEntry(std::string plate, int distance) : plate(plate), distance(distance) {}
};

bool comparePodiumEntries(const PodiumEntry& a, const PodiumEntry& b) {
    return a.distance > b.distance;
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> speedDistribution(100, 200);
    std::uniform_int_distribution<> accelerationDistribution(-10, 15);

    std::vector<Car> cars;
    for (int i = 0; i < 10; ++i) {
        int top_speed = speedDistribution(gen);
        cars.emplace_back("ABC-" + std::to_string(i + 1), top_speed);
    }

    std::vector<PodiumEntry> podium;

    while (true) {
        for (int i = 0; i < 10; ++i) {
            cars[i].accelerate(accelerationDistribution(gen));
            cars[i].travel(1);

            if (cars[i].getDistance() >= 10000) {
                podium.emplace_back(cars[i].getPlate(), cars[i].getDistance());
            }
        }

        // Check if any car has won and exit the loop
        if (!podium.empty()) {
            break;
        }
    }

    // Sort the podium entries by distance (furthest first)
    std::sort(podium.begin(), podium.end(), comparePodiumEntries);

    // Print the podium
    std::cout << "Podium:" << std::endl;
    for (size_t i = 0; i < podium.size(); ++i) {
        std::cout << "  " << i + 1 << ". " << podium[i].plate << " - " << podium[i].distance << " km" << std::endl;
    }

    // Print only the winner
    std::cout << "Winner: " << podium[0].plate << " Voitti!" << std::endl;

    for (const auto& car : cars) {
        car.get_info();
    }

    return 0;
}
