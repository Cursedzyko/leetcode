# include <iostream>
# include "LinkedListr.hpp"


int main(void)
{
	LinkedListr<int> l;

	std::cout << "List empty: " << l.empty() << std::endl;

	l.insertBack(10);
	l.insertBack(11);
	l.insertFront(1);

	l.printList();

	l.deleteEnd();
	l.insertBack(100);
	l.deleteFront();
	l.insertFront(1111);
	l.printList();

	std::cout << "List empty: " << l.empty() << std::endl;

	return (0);
}