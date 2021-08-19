SRCS	=	phonebook.cpp
OBJS	=	${SRCS:.cpp=.o}
CFLAGS	=   -O0 --std=c++98 -Wall -Wextra -Werror #-g -fsanitize=address
HEAD	=	philo.h
CC		=	clang++
RM		=	-rm	-f
NAME	=	phonebook

%.o: %.cpp $(HEAD)
	$(CC) ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
		$(CC) ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

.PHONY:	all bonus clean fclean re
