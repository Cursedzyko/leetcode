# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 15:38:36 by zyunusov          #+#    #+#              #
#    Updated: 2023/05/06 16:40:54 by zyunusov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = slist

CXX = c++

CXXFLAGS = -Wextra -Werror -Wall 

SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
	
.PHONY: clean fclean re