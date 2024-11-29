# Compiler
CC = cc

# Compiler flags
CCFLAGS = -Wall -Wextra -Werror -g3

INCLUDE =	libft.h
LIB =		libft.a
FILES = ${wildcard ft_*.c}
OBJS = ${FILES:.c=.o}

all:	${LIB}

${LIB}:	${OBJS}
	ar rcs ${LIB} ${OBJS}

.c.o:
	${CC} ${CCFLAGS} -I ${INCLUDE} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${LIB}

re:	fclean all

.PHONY:	all clean fclean re
