#include "ArithProgression.hpp"
#include "GeoProgression.hpp"
#include "FibonacciProgression.hpp"

int main(void)
{
	Progression* arr[3];
	arr[0] = new FibonacciProgression(0);
	arr[1] = new ArithProgression(1);
	arr[2] = new GeoProgression(3);

	arr[0]->printProgression(10);
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	arr[1]->printProgression(10);
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	arr[2]->printProgression(10);

	delete arr[0];
	delete arr[1];
	delete arr[2];
}