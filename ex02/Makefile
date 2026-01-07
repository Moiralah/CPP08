# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 17:37:16 by huidris           #+#    #+#              #
#    Updated: 2026/01/04 23:41:20 by huidris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= span

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= c++

SRC		= main.cpp Span.cpp

$(NAME): $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	clear

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

