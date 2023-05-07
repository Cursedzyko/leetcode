/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntry.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:42:03 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/02 10:47:41 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameEntry.hpp"

GameEntry::GameEntry(const std::string &n, int s): _score(s), _name(n)
{
}

GameEntry::~GameEntry()
{
}


std::string GameEntry::getName() const
{
	return (this->_name);
}

int GameEntry::getScore() const
{
	return (this->_score);
}