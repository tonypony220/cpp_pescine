SRCS	=   ClapTrap.cpp  main.cpp  FlagTrap.cpp ScavTrap.cpp DiamondTrap.cpp 
OBJS	=	${SRCS:.cpp=.o}
CFLAGS	=   -O0 -Wall -Wextra -Werror --std=c++98 -Wshadow -Wno-shadow # -fsanitize=address
CC		=	clang++
RM		=	-rm	-f
HEAD	=	ClapTrap.hpp FlagTrap.hpp ScavTrap.hpp DiamondTrap.hpp
NAME	=	out

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
