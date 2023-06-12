#ifndef LINKED_LIST_HPP
# define LISNKED_LIST_HPP

#include <iostream>

template <typename T>
class Node
{
	public:
		T data;
		Node* next;

		Node(T d)
		{
			this->data = d;
			this->next = NULL;
		}
		Node()
		{
			this->data = 0;
			this->next = NULL;
		}
		~Node()
		{
		}

};

template <typename T>
class LinkedListr
{
private:
	Node<T> *head;

	class ListEmpty : public std::exception
	{
		const char* what() const throw()
		{
			return ("List is empty!!!\n");
		}
	};
public:
	LinkedListr(){this->head = NULL;}
	~LinkedListr();
	bool empty();
	void insertBack(T);
	void insertFront(T);
	void printList();

	void deleteFront();
	void deleteEnd();
};

template <typename T>
LinkedListr<T>::~LinkedListr()
{
	while(!this->empty())
		this->deleteFront();
}

template <typename T>
bool LinkedListr<T>::empty()
{
	return (this->head == NULL);
}

template <typename T>
void LinkedListr<T>::insertBack(T data)
{
	Node<T> *newNode = new Node<T>(data);

	if (this->head == NULL)
	{
		this->head = newNode;
		return ;
	}
	Node<T>* tmp = this->head;
	while(tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = newNode;
}

template <typename T>
void LinkedListr<T>::insertFront(T data)
{
	Node<T> *newNode = new Node<T>(data);

	newNode->next = this->head;
	this->head = newNode;
}

template <typename T>
void LinkedListr<T>::printList(void)
{
	if (this->head == NULL)
		throw ListEmpty();
	Node<T> *tmp = this->head;
	while(tmp)
	{
		std::cout << tmp->data << " ";
		tmp = tmp->next;
	}
	std::cout << std::endl;
}

template <typename T>
void LinkedListr<T>::deleteFront()
{
	Node<T> *tmp = head;
	head = tmp->next;
	delete tmp;
}


template <typename T>
void LinkedListr<T>::deleteEnd()
{
	if (this->head == NULL)
		throw ListEmpty();

	Node<T> *tmp = head;
	if (tmp->next == NULL)
	{
		delete tmp;
		this->head = NULL;
		return ;
	}

	while(tmp->next->next)
	{
		tmp = tmp->next;
	}
	Node<T> *del = tmp->next;
	delete del;
	tmp->next = NULL;
}

#endif