CC			=	c++
FLAGS1		=	-Wall -Wextra -Werror
FLAGS2		=	-std=c++98
OPTFLAGS	=	-O2

RM			=	rm -rf

# -----------------------------------

NAME		=	PhoneBook
HDRS		=	PhoneBook.h	PhoneBook.hpp	Contact.hpp
SRCS		=	main.cpp	PhoneBook.cpp	Contact.cpp
OBJS		=	${SRCS:%.cpp=%.o}

# -----------------------------------

READY	=	${NAME} is ready
SWEPT	=	Directory was cleaned
_PURPLE	=	\e[0;35m
_CYAN	=	\e[0;36m
_END	=	\e[33m

# -----------------------------------

.PHONY:		re all clean fclean

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