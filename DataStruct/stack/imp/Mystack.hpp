#ifndef MYSTACK_HPP
# define MYSTACK_HPP

# include <iostream>
# include <exception>

template <typename T>
class Node
{
public:
	T data;
	Node* next;
	Node* prev;
	// friend class DLinledList;
	Node(T d)
	{
		this->data = d;
		this->next = NULL;
		this->prev = NULL;
	}
	~Node()
	{
	}

};

template <typename T>
class DLinkedList
{
private:
	Node<T>* head;
	Node<T>* trailer;
	int size;
protected:
	void add(Node<T> *pt, const T& data)
	{
		Node<T> *newElem = new Node<T>(data);
		newElem->next = pt;// link u in between pt
		newElem->prev = pt->prev;
		pt->prev->next = newElem;
		pt->prev = newElem;
		size++;
	}
	void remove(Node<T>* pt)
	{
		Node<T>* p = pt->prev;
		Node<T>* n = pt->next;
		p->next = n;
		n->prev = p;
		size--;
		delete pt;
	}
public:
	DLinkedList()
	{
		head = new Node<T>(0);
		trailer = new Node<T>(0);
		head->next = trailer;
		trailer->prev = head;
		size = 0;
	}
	~DLinkedList()
	{
		while(!empty())
			removeFront();
		delete head;
		delete trailer;
	}
	bool empty() const
	{
		return (size == 0);
	}
	const T& front() const
	{
		if (head == trailer)
			throw std::invalid_argument();
		return (head->next->data);
	}
	const T& back() const
	{
		return (trailer->prev->data);
	}
	void addFront(T data)
	{
		add(head->next, data);
	}
	void addBack(T data)
	{
		add(trailer, data);
	}
	void removeFront()
	{
		remove(head->next);
	}
	void removeBack()
	{
		remove(trailer->prev);
	}

};

template <typename T>
class Deque
{
private:
	DLinkedList<T> D;
	int n;

	class DequeEmpty : public std::exception{
		public:
			const char* what() const throw()
			{
				return "Deque is empty!!!\n";
			}
	};
public:
	Deque(/* args */);
	~Deque();
	int size();
	bool empty() const;
	void push_front(T);
	void push_back(T);
	void pop_front();
	void pop_back();
	const T& front();
	const T& back();
};

template <typename T>
Deque<T>::Deque(/* args */)
{
	// this->D = new DLinkedList<T>();
	this->n = 0;
}

template <typename T>
void Deque<T>::push_front(T data)
{
	this->D.addFront(data);
	this->n++;
}

template <typename T>
void Deque<T>::pop_front()
{
	if (empty())
		throw DequeEmpty();
	this->D.removeFront();
	this->n--;
}

template <typename T>
void Deque<T>::pop_back()
{
	if (empty())
		throw DequeEmpty();
	this->D.removeBack();
	this->n--;
}

template <typename T>
void Deque<T>::push_back(T data)
{
	this->D.addBack(data);
	this->n++;
}

template <typename T>
bool Deque<T>::empty() const
{
	return (this->n == 0);
}

template <typename T>
int Deque<T>::size()
{
	return (this->n);
}

template <typename T>
const T& Deque<T>::front()
{
	if (empty())
		throw DequeEmpty();
	return (D.front());
}

template <typename T>
const T& Deque<T>::back()
{
	return (D.back());
}

// template <typename T>
// T & Deque::operator[](int i)
// {
// 	if 
// }

template <typename T>
Deque<T>::~Deque()
{
	// delete this->D;
}


template <typename T>
class DequeStack
{
	private:
		Deque<T> Deq;
	public:
		DequeStack();
		int size() const;
		bool empty() const;
		const T& top();
		void push(const T& e);
		void pop();	
}

DequeStack::DequeStack(): Deq()
{
}

int DequeStack::size() const
{
	return(this->Deq.size());
}

bool DequeStack::empty() const{
	return (this->Deq.empty());
}

const T& DequeStack::top()
{
	return (this->Deq.front());
}

void  DequeStack::push(const T& e)
{
	this->Deq.push_front(e);
}

void  DequeStack::pop()
{
	this->Deq.pop_front();
}


#endif