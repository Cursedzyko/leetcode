/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Score.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:48:51 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/03 15:07:21 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCORE_HPP
# define SCORE_HPP

# include <iostream>
# include "GameEntry.hpp"

class GameEntry;

class Score
{
private:
	int _maxElem;
	int _numElem;
	GameEntry *_arr;

	class OutOfBound : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Index out of bounds!!!");
			}
	};
public:
	Score(int maxEn = 10);
	~Score();
	void add(const GameEntry &e);
	GameEntry remove(int i);
};



#endif