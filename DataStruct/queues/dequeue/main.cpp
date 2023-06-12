#include <iostream>
#include "Deque.hpp"

int main(void)
{
	Deque<int> l;

	std::cout << "Deque empty: " << l.empty() << std::endl;

	l.push_back(10);
	l.push_front(100);
	l.push_back(17);
	l.push_front(11111);

	l.pop_back();
	l.pop_front();


	std::cout << "Size: " << l.size() << std::endl;
	std::cout << "front: " << l.front() << std::endl;
	std::cout << "Back: " << l.back() << std::endl;
	
	while(!l.empty())
	{
		std::cout << "Deque elem: " << l.front() << std::endl;
		l.pop_front();
	}

	return (0);
}