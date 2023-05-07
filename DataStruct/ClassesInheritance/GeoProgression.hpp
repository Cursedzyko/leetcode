#ifndef GEO_PROGRESSION_HPP
# define GEO_PROGRESSION_HPP

#include <iostream>
#include "Progression.hpp"

class GeoProgression : public Progression
{
protected:
	long _base;
	virtual long nextValue();
public:
	GeoProgression(long base = 2);
	~GeoProgression();
};

GeoProgression::GeoProgression(long base): Progression(1), _base(base)
{
}

GeoProgression::~GeoProgression()
{
}

long GeoProgression::nextValue()
{
	_cur *= _base;
	return (_cur);
}


#endif