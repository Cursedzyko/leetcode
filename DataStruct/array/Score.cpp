#include "Score.hpp"

Score::Score(int maxEn): _maxElem(maxEn), _numElem(0) 
{
	this->_arr = new GameEntry[maxEn];
}

Score::~Score()
{
	delete[] this->_arr;
}

void Score::add(const GameEntry &e)
{
	int newScore = e.getScore();
	if (this->_numElem == this->_maxElem)
		return ;
	if (newScore <= this->_arr[this->_numElem - 1].getScore())
		return;
	else
		this->_numElem++;
	int i = this->_numElem - 2;
	while (i >= 0 && newScore > this->_arr[i].getScore())
	{
		this->_arr[i + 1] = this->_arr[i];
		i--;
	}
	this->_arr[i + 1] = e;
}

GameEntry Score::remove(int i)
{
	if (i <= 0 || i >= _numElem)
		throw OutOfBound();
	GameEntry e = this->_arr[i];
	for (int j = i + 1; j < this->_numElem; j++ )
		this->_arr[j - 1] = this->_arr[j];
	this->_numElem--;
	return e;

}