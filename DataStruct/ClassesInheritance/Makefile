# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 15:38:36 by zyunusov          #+#    #+#              #
#    Updated: 2023/04/24 15:48:44 by zyunusov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = progression

CXX = c++

CXXFLAGS = -Wextra -Werror -Wall -std=c++98

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