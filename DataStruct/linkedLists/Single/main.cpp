#include <iostream>
#include "LinkedList.hpp"
using namespace std;


int main(void)
{
	SLinkedList<string> a;
	a.addFront("Zyko");
	a.addFront("Hello");
	a.addFront("debil");
	a.removeFront();

	while(a.head)
	{
		std::cout << a.front() << " ";
		a.head = a.head->next;
	}
	std::cout << endl;
	return(0);
}