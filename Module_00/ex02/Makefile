# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estrong <estrong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 16:49:38 by estrong           #+#    #+#              #
#    Updated: 2022/10/02 16:49:46 by estrong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	c++
FLAGS1		=	-Wall -Wextra -Werror
FLAGS2		=	-std=c++98
OPTFLAGS	=	-O2

RM			=	rm -rf

# ------------------------------------------------------------------------------

NAME		=	DreamWork
HDRS		=	Account.hpp
SRCS		=	tests.cpp	Account.cpp
OBJS		=	${SRCS:%.cpp=%.o}

# ------------------------------------------------------------------------------

READY	=	${NAME} is ready
SWEPT	=	Directory was cleaned
_PURPLE	=	\e[0;35m
_CYAN	=	\e[0;36m
_END	=	\e[33m

# ------------------------------------------------------------------------------

#%.o:		%.cpp	${HDR}
#			@${CC} ${FLAGS1} ${FLAGS2} ${OPTFLAGS} -c -o $@ $<

${NAME}:	${OBJS}
			${CC}	${FLAGS1}	${FLAGS2}	${OPTFLAGS}	${OBJS}	-o ${NAME}
			@printf "${_PURPLE}${READY}${_END}\n"


all:		${NAME}

clean:
			@${RM} ${OBJS}
			@printf "${_PURPLE}${SWEPT}${_END}\n"

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY:		re all clean fclean