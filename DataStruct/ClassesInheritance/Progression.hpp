#ifndef PROGRESSION_HPP
# define PROGRESSION_HPP

#include <iostream>

class Progression
{
protected:
	long _cur;
	long _first;
public:
	Progression(long f = 0);
	virtual ~Progression();
	void printProgression(int n);
private:
	virtual long firstValue();
	virtual long nextValue();
};

Progression::Progression(long f): _cur(f) , _first(f)
{
}

Progression::~Progression()
{
}

long Progression::firstValue()
{
	this->_cur = this->_first;
	return (this->_cur);
}

long Progression::nextValue()
{
	return ++_cur;
}

void Progression::printProgression(int n)
{
	std::cout << this->firstValue();
	for (int i = 0; i < n; i++)
		std::cout << ' ' << nextValue();
	std::cout << std::endl;	
}

#endif