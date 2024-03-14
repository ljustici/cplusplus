# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 13:16:06 by ljustici          #+#    #+#              #
#    Updated: 2024/03/07 16:57:58 by ljustici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Megaphone

SRCS	=	megaphone.cpp \

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