#include <iostream>
#include <cstdlib>

int new_method() 
{
    const int allocationSize = 1000000;  
    int* ptr = nullptr;
    int successfulAllocations = 0;

    try {
        while (true) {
            ptr = new int[allocationSize];
            successfulAllocations++;
        }
    }
    catch (std::bad_alloc& e) {
        std::cerr << "Muistinvaraus epäonnistui: " << e.what() << std::endl;
    }

    std::cout << "Onnistuneita muistinvarauksia: " << successfulAllocations << std::endl;


    for (int i = 0; i < successfulAllocations; ++i) {
        delete[] ptr;
    }

    return 0;
}

int malloc_method() 
{
    const int allocationSize = 1000000;  
    int* ptr = nullptr;
    int successfulAllocations = 0;

    while (true) {
        ptr = static_cast<int*>(malloc(allocationSize * sizeof(int)));
        if (ptr == nullptr) {
            std::cerr << "Muistinvaraus epäonnistui." << std::endl;
            break;
        }
        successfulAllocations++;
    }

    std::cout << "Onnistuneita muistinvarauksia: " << successfulAllocations << std::endl;

    
    for (int i = 0; i < successfulAllocations; ++i) {
        free(ptr);
    }

    return 0;
}

int main() 
{
    /*
    std::cout << "new_method(): " << std::endl;
    new_method();
    */

    /*
    std::cout << "malloc_method(): " << std::endl;
    malloc_method();
    */

    return 0;
}

