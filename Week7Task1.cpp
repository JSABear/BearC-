#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:

    void push(const T& element) 
    {
        elements.push_back(element);
    }

    T pop() 
    {
        T top = elements.back();
        elements.pop_back();
        return top;
       

    }

    size_t size() const 
    {
        return elements.size();
    }
};

int main() 
{
    Stack<int> intStack;
    Stack<std::string> stringStack;

    intStack.push(3);
    intStack.push(2);
    intStack.push(1);

    stringStack.push("+");
    stringStack.push("+");
    stringStack.push("C");

    std::cout << "Int Stack Size: " << intStack.size() << std::endl;
    while (intStack.size() > 0) {
        std::cout << intStack.pop() << " ";
    }
    std::cout << std::endl;

    std::cout << "String Stack Size: " << stringStack.size() << std::endl;
    while (stringStack.size() > 0) {
        std::cout << stringStack.pop() << " ";
    }
    std::cout << std::endl;

    return 0;
}
