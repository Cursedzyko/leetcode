#ifndef FIBONACCI_PROGRESSION_HPP
# define FIBONACCI_PROGRESSION_HPP

#include <iostream>
#include "Progression.hpp"

class FibonacciProgression : public Progression
{
private:
	long _snd;
	long _prev;
public:
	FibonacciProgression(long f = 0, long s = 1);
	~FibonacciProgression();
protected:
	virtual long nextValue();
	virtual long firstValue();
};

FibonacciProgression::FibonacciProgression(long f, long s): Progression(f), _snd(s), _prev(s - _first)
{
}

FibonacciProgression::~FibonacciProgression()
{
}

long FibonacciProgression::firstValue()
{
	_cur = _first;
	_prev = _snd - _first;
	return (_cur);
}

long FibonacciProgression::nextValue()
{
	long tmp = _prev;
	_prev = _cur;
	_cur += tmp;
	return (_cur);
}


#endif