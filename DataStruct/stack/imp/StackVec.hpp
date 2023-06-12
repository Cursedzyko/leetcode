#ifndef STACKVEC_HPP
# define STACKVEC_HPP

#include <iostream>
#include <vector>
#include <exception>

template <typename T>
class Stack
{
private:
	std::vector<T> _st;

	class Empty : public std::exception
	{
		const char* what() const throw()
		{
			return "STACK IS EMPTY\n";
		}
	};
public:
	Stack();
	bool empty() const;
	int size() const;
	const T& top();
	void push(T  data);
	void pop();
};

template <typename T>
Stack<T>::Stack()
{
}

template <typename T>
bool Stack<T>::empty() const
{
	return (this->_st.empty());
}

template <typename T>
int Stack<T>::size() const{
	return (this->_st.size());
}

template <typename T>
const T& Stack<T>::top()
{
	if (this->_st.empty())
		throw Empty();
	return (this->_st[this->size() - 1]);
}

template <typename T>
void Stack<T>::push(T data)
{
	this->_st.push_back(data);
}


template <typename T>
void Stack<T>::pop()
{
	if (this->_st.empty())
		throw Empty();
	this->_st.pop_back();
}

#endif