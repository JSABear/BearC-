#include <iostream>

class TestClass {
public:
    TestClass() {
        dynamicVariable = new int;
        std::cout << "Varattu muistia" << std::endl;
    }

    TestClass(const TestClass& other) {
        dynamicVariable = new int;
        *dynamicVariable = *(other.dynamicVariable);
        std::cout << "Kopiokonstruktori." << std::endl;
    }

    TestClass& operator=(const TestClass& other) {
        if (this != &other) {  
            delete dynamicVariable;  
            dynamicVariable = new int;
            *dynamicVariable = *(other.dynamicVariable);
            std::cout << "Sijoitusoperaattori" << std::endl;
        }
        return *this;
    }

    ~TestClass() {
        delete dynamicVariable;
        std::cout << "Tila vapautettu" << std::endl;
    }

private:
    int* dynamicVariable;
};

int main() {

    TestClass first;
    TestClass second;

    second = first;

    TestClass third(first);

    return 0;
}
