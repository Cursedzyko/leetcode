/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntry.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:41:10 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/03 15:06:54 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_ENTRY_HPP
# define GAME_ENTRY_HPP

#include <iostream>

class GameEntry
{
private:
	int _score;
	std::string _name;
public:
	GameEntry(const std::string &n = "", int s = 0);
	~GameEntry();

	std::string getName() const;
	int getScore() const;
};




#endif