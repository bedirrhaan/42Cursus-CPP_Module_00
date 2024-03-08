# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 23:10:23 by bcopoglu          #+#    #+#              #
#    Updated: 2024/03/09 00:02:17 by bcopoglu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
			$(RM) $(OBJ)

fclean : clean
			$(RM) $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re
