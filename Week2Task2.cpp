#include <iostream>

int main()
{
	int x;
	x = 10;

	int* y = &x;

	std::cout << x << std::endl << &x << std::endl << y << std::endl << &y;
	return 0;
}
