#include <iostream>

int Fibonacci(int k)
{
	if (k <= 1)
		return k;
	return (Fibonacci(k - 1) + Fibonacci(k - 2));
}



int main(void)
{
	std::cout << Fibonacci(20) << std::endl;
	return (0);
}