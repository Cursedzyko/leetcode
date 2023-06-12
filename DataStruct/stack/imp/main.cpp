#include <iostream>
#include "StackVec.hpp"

int main()
{
	Stack<int> l;

	std::cout << "Empty: " << l.empty() << std::endl;

	l.push(10);
	l.push(11);
	l.push(12);
	l.push(13);
	l.push(14);
	l.push(15);

	std::cout << "TOP: " << l.top() << std::endl;

	l.pop();

	std::cout << "TOP: " << l.top() << std::endl;
	std::cout << "SIZE: " << l.size() << std::endl;
	std::cout << "Empty: " << l.empty() << std::endl;

	while(!l.empty())
	{
		std::cout << "ELEMENT: " << l.top() << std::endl;
		l.pop();
	}
	return (0);
}