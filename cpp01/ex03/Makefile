SRCS	=   main.cpp Weapon.cpp HumanA.cpp  HumanB.cpp  
OBJS	=	${SRCS:.cpp=.o}
CFLAGS	=   -O0 -Wall -Wextra -Werror #-g -fsanitize=address
CC		=	clang++
RM		=	-rm	-f
HEAD	=	Weapon.hpp HumanA.hpp HumanB.hpp
NAME	=	fight

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
