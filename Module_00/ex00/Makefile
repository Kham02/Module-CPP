NAME		=	megaphone

SRCS		=	megaphone.cpp

CC			=	c++

FLAGS1		=	-Wall -Wextra -Werror

FLAGS2		=	-std=c++98

OPTFLAGS	=	-O2

# HDRS		=
OBJS	=	${SRCS:%.cpp=%.o}

READY	=	${NAME} is ready
CLEAN	=	Directory was cleaned
_GREEN	=	\e[0;32m
_CYAN	=	\e[0;36m
_END	=	\e[33m

.PHONY:		re all clean fclean

${NAME}:	${OBJS}
			${CC} ${FLAGS1} ${FLAGS2} ${OPTFLAGS} ${SRCS} -o ${NAME}
			@printf "${_PURPLE}${READY}${_END}\n"


all:		${NAME}

clean:
			@${RM} ${OBJS}
			@printf "${_PURPLE}${SWEPT}${_END}\n"

fclean:		clean
			@${RM} ${NAME}

re:			fclean all
