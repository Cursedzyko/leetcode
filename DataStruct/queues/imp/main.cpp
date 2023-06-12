#include <iostream>
#include "SQueue.hpp"

int main(void)
{
	SQueue<int> q;
	std::cout << "EMPTY: " << q.empty() << std::endl;
    q.enQueue(10);
    q.enQueue(20);
    q.deQueue();
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.deQueue();

	std::cout << "SIZE: " << q.size() << std::endl;
	std::cout << "EMPTY: " << q.empty() << std::endl;
	std::cout << "FRONT: " << q.front() << std::endl;

	while(!q.empty())
	{
		std::cout << "ELEM: " << q.front() << std::endl;
		q.deQueue();
	}
	return (0);
}