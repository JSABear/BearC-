#include <iostream>

int summa_r(int &x, int &y);
int summa_p(int* x, int* y);

int main() {
    int x = 2;
    int y = 3;

    int result_r = summa_r(x, y);
    int result_p = summa_p(&x, &y);
    std::cout << "Sum: " << result_r << std::endl;
    std::cout << "Sum: " << result_p << std::endl;

    return 0;
}

int summa_r(int &x, int &y) 
{
    int sum = x + y;
    return sum;
}

int summa_p(int* x, int* y) 
{
    int sum = *x + *y;
    return sum;
}