#ifndef MYVECTOR_HPP
# define MYVECTOR_HPP

#include <iostream>

template <typename T>
class MyVector
{
	private:
		T* arr;
		int capacity;
		int cur;

		class OutRange : public std::exception
		{
			const char* what() const throw() 
			{
				return "Index that inputed out of range\n";
			}
		};

		class NoElem : public std::exception
		{
			const char* what() const throw()
			{
				return "No elements to pop in array\n";
			}
		};
	public:
		MyVector();
		~MyVector();
		void push_back(T v);
		void push_back(T v, int ind);
		int size();
		T get(int ind);
		void pop_back();
		int getCap();
		void print();
		T & operator[](int i);
		bool empty();
		T back();
		T front();
};

template <typename T>
MyVector<T>::MyVector()
{
	this->arr = new T[1];
	this->capacity = 1;
	this->cur = 0;
}

template <typename T>
MyVector<T>::~MyVector()
{
	delete [] this->arr;
}

template <typename T>
void MyVector<T>::push_back(T v) // extendable array
{
	if(this->capacity == this->cur)
	{
		T* tmp = new T[2 * this->capacity];
		for(int i = 0; i < capacity; i++)
			tmp[i] = this->arr[i];
		delete [] this->arr;
		this->capacity *= 2;
		this->arr = tmp;
	}
	this->arr[this->cur] = v;
	this->cur++;
}

template <typename T>
void MyVector<T>::push_back(T v, int ind)
{
	if (ind == this->capacity)
		this->push_back(v);
	else
		this->arr[ind] = v;

}

template <typename T>
int MyVector<T>::size()
{return this->cur;}

template <typename T>
T MyVector<T>::get(int ind)
{

	if (ind < this->cur && ind >= 0)
		return (this->arr[ind]);
	throw OutRange();
}

template <typename T>
void MyVector<T>::pop_back()
{
	try
	{
		if (this->cur <= 0)
			throw NoElem();
		this->cur--;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
	
}

template <typename T>
int MyVector<T>::getCap()
{
	return (this->capacity);
}

template <typename T>
void MyVector<T>::print()
{
	for(int i = 0; i < this->cur; i++)
	{
		std::cout << this->arr[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T>
T & MyVector<T>::operator[](int i)
{
	if (i < 0 || i > this->capacity)
		throw OutRange();
	return this->arr[i];
}

template <typename T>
bool MyVector<T>::empty()
{
	return (this->cur == 0);
}

template <typename T>
T MyVector<T>::front()
{
	if (this->empty())
		throw NoElem();
	return (this->arr[0]);
}

template <typename T>
T MyVector<T>::back()
{
	if (this->empty())
		throw NoElem();
	return (this->arr[this->cur - 1]);
}

#endif