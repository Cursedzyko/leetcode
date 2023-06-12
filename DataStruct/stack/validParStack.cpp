/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validParStack.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:00:24 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/18 15:48:06 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <unordered_map>


/*
  |    ]     |6
  |    [     |5
  |    )     |4
  |    (     |3
  |    }     |2
  |    {     |1
  |__________|
*/

bool validPar(std::string s)
{
	std::stack<char> tmp;
	std::unordered_map<char, char> mapp = {{'}', '{'}, {')', '('}, {']', '['}};
	for(char c : s)
	{
		if(mapp.find(c) != mapp.end()) // if there is closing bracket
		{
			if(tmp.empty() || tmp.top() != mapp[c]) // if stack is empty  or the top element doent match 
			{
				return false;
			}
			tmp.pop();
		}
		else // else there is opening bracket
		{
			tmp.push(c);
		}
	}
	return tmp.empty();
	
}

int main(void)
{
	std::string s = "{}()[";
	std::cout << validPar(s) << std::endl;
}