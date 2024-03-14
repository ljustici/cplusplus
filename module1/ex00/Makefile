# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 13:16:06 by ljustici          #+#    #+#              #
#    Updated: 2024/03/13 13:35:26 by ljustici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie

SRCS	=	Zombie.cpp newZombie.cpp main.cpp randomChump.cpp

OBJS	=	${SRCS:.cpp=.o}

CC		=	c++

CFLAGS	=	-Werror -Wextra -Wall -std=c++98

all:	$(NAME)

${NAME}:${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
 
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:		fclean all

.PHONY: all, clean, fclean, re