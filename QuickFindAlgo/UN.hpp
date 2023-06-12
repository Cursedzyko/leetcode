#ifndef UN_HPP
# define UN_HPP

#include <iostream>
#include <vector>

class UN
{
private:
	std::vector<int> t;
	int size;
public:
	UN(int size);
	~UN();
	void unionm(int q, int d);
	bool connected(int q, int d);
};

UN::UN(int size)
{
	this->size = size - 1;
	for(int i = 0; i <= this->size; i++)
		this->t[i] = i;
}

UN::~UN()
{
}

void UN::unionm(int q, int d)
{
	if (q > this->size || d > this->size)
		return ;
	if (q < 0 || d < 0)
		return ;
	int qi = this->t[q];
	int di =this->t[d];
	for(int i = 0; i <= this->size; i++)
	{
		if (this->t[i] == qi)
			this->t[i] = di;
	}
}

bool UN::connected(int q, int d)
{
	return (this->t[q] == this->t[d]);
}





#endif