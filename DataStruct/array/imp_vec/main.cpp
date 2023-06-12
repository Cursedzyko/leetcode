#include <iostream>
#include "MyVector.hpp"

int main(void)
{
	MyVector<int> t;
	t.pop_back();
	t.push_back(10);
	t.push_back(20);
	t.push_back(30);

	t.print();
	std::cout << t.size() << std::endl;
	t.pop_back();
	t.print();
	std::cout << t.size() << std::endl;

	for(int i = 0; i < t.size(); i++)
	{
		std::cout << t[i] << " ";
	}
	std::cout << std::endl;
	t.push_back(40);

	std::cout << "Front: " << t.front() << std::endl;
	std::cout << "Back: " << t.back() << std::endl;

	return (0);
}