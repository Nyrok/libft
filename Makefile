# Compiler
CC = cc

# Compiler flags
CCFLAGS = -Wall -Wextra -Werror -g3

NAME =		libft.a
FILES = ${wildcard ft_*.c}
OBJS = ${FILES:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
	ar rcs ${NAME} ${OBJS}

.c.o:
	${CC} ${CCFLAGS} -I. -c $< -o $@

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
