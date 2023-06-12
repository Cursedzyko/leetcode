#ifndef DLINKED_LIST_HPP
# define DLINKED_LIST_HPP

#include <iostream>

template <typename Elem>
class DNode
{
private:
	Elem elem;
	DNode *next;
	DNode *prev;
	friend class DLinkedList;
};

template <typename Elem>
class DLinkedList { // doubly linked list
public:
	class Iterator
	{
		T& operator*(){
			return v->elem;
		}
		bool operator==(const Iterator& p) const
		{
			return v == p.v;
		}
		bool operator!=(const Iterator& p) const
		{
			return v != p.v;
		}
		Iterator& operator++()
		{
			v = v->next;
			return *this;
		}
		Iterator& operator--()
		{
			v = v->prev;
			return *this;
		}
		friend class DLinkedList;
		private:
			DNode<Elem> *v;
			Iterator(Node* u){v = u}

	};
	DLinkedList(); // constructor
	~DLinkedList(); // destructor
	bool empty() const; // is list empty?
	const Elem& front() const; // get front element
	const Elem& back() const; // get back element
	void addFront(const Elem& e); // add to front of list
	void addBack(const Elem& e); // add to back of list
	void removeFront(); // remove from front
	void removeBack(); // remove from back
	Iterator begin() const
	{
		return Iterator::(header->next);
	}
	Iterator end() const
	{
		return Iterator::(trailer);
	}
private: // local type definitions
	DNode<Elem>* header; // list sentinels
	DNode<Elem>* trailer;
	protected: // local utilities
	void add(DNode* v, const Elem& e); // insert new node before v
	void remove(DNode* v); // remove node v
};

template <typename Elem>
DLinkedList<Elem>::DLinkedList() { // constructor
	header = new DNode<Elem>; // create sentinels
	trailer = new DNode<Elem>;
	header->next = trailer; // have them point to each other
	trailer->prev = header;
}

template <typename Elem>
DLinkedList<Elem>::~DLinkedList() { // destructor
	while (!empty()) removeFront(); // remove all but sentinels
	delete header; // remove the sentinels
	delete trailer;
}

template <typename Elem>
bool DLinkedList<Elem>::empty() const // is list empty?
{ return (header->next == trailer); }

template <typename Elem>
const Elem& DLinkedList<Elem>::front() const // get front element
{ return header->next->elem; }

template <typename Elem>
const Elem& DLinkedList<Elem>::back() const // get back element
{ return trailer->prev->elem; }

template <typename Elem>
void DLinkedList<Elem>::add(DNode* v, const Elem& e) {
	DNode<Elem>* u = new DNode<Elem>; u->elem = e; // create a new node for e
	u->next = v; // link u in between v
	u->prev = v->prev; // . . .and v->prev
	v->prev->next = v->prev = u;
}

template <typename Elem>
void DLinkedList<Elem>::addFront(const Elem& e) // add to front of list
{ add(begin(), e); }

template <typename Elem>
void DLinkedList<Elem>::addBack(const Elem& e) // add to back of list
{ add(end(), e); }

template <typename Elem>
void DLinkedList<Elem>::remove(DNode* v) { // remove node v
	DNode<Elem>* u = v->prev; // predecessor
	DNode<Elem>* w = v->next; // successor
	u->next = w; // unlink v from list
	w->prev = u;
	delete v;
}

template <typename Elem>
void DLinkedList<Elem>::removeFront() // remove from font
{ remove(begin()); }

template <typename Elem>
void DLinkedList<Elem>::removeBack() // remove from back
{ remove(end()); }



#endif


// A function that reverses the contents of a doubly linked list L.
// void listReverse(DLinkedList& L) { // reverse a list
// 	DLinkedList T; // temporary list
// 	while (!L.empty()) { // reverse L into T
// 		std::string s = L.front(); L.removeFront();
// 		T.addFront(s);
// 	}
// 	while (!T.empty()) { // copy T back to L
// 		std::string s = T.front(); T.removeFront();
// 		L.addBack(s);
// 	}
// }
