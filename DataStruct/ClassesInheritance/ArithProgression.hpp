#ifndef ARITH_PROGRESSION_HPP
# define ARITH_PROGRESSION_HPP

#include <iostream>
#include "Progression.hpp"

class ArithProgression : public Progression
{
public:
	ArithProgression(long i = 1);
	virtual ~ArithProgression();
protected:
	virtual long nextValue();
	long _inc;
};

ArithProgression::ArithProgression(long i): Progression(), _inc(i)
{
}

ArithProgression::~ArithProgression()
{
}

long ArithProgression::nextValue()
{
	_cur += _inc;
	return (_cur);
}


#endif