#include <iostream>

int recursionFactorial(int n)
{
	if (n != 0)
		return (n * recursionFactorial(n - 1)); // n = 5 * returns = 4 * returns = 3 * returns = 2 * returns = 1 == 120
	return (1);
}

int main(void)
{
	std::cout << recursionFactorial(4) << std::endl;
	return (0);
}