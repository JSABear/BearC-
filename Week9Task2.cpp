#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

std::string readFile(const std::string& fileName) {
    std::ifstream file(fileName);

    if (!file.is_open()) {
        throw std::runtime_error("Failed to open the file.");
    }

    std::string content;
    std::string line;

    while (getline(file, line)) {
        content += line + "\n";
    }

    file.close();
    return content;
}

int main() {
    std::string fileName;

    std::cout << "Enter the file name: ";
    std::cin >> fileName;

    try {
        std::string fileContent = readFile(fileName);
        std::cout << "File content:\n" << fileContent;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
