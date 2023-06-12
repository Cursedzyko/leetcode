#ifndef SQUEUE_HPP
# define SQUEUE_HPP

#include <iostream>

template <typename T>
struct Node
{
	T data;
	Node* next;
};

template <typename T>
class SQueue
{
	private:
		Node<T>* head;
		Node<T>* rear;
		int _size;
	public:
		SQueue()
		{
			head = NULL;
			rear = NULL;
			_size = 0;
		}
		void enQueue(T x)
		{
			Node<T> *newElem = new Node<T>;
			newElem->data = x;
			if (!rear)
			{
				head = newElem;
				rear = newElem;
				_size++;
				return;
			}
			rear->next = newElem;
			rear = newElem;
			_size++;
		}

		void deQueue()
		{
			if (!head)
				return ;
			Node<T> *tmp = head;
			head = head->next;

			if (!head)
				rear = NULL;
			delete tmp;
			_size--;
		}

		bool empty() const
		{
			return (_size == 0);
		}

		const T& front()
		{
			if (empty())
				exit(0);
			return (head->data);
		}

		int size() const 
		{
			return (_size);
		}
		~SQueue()
		{
			while(!empty())
				deQueue();
		}

};


#endif