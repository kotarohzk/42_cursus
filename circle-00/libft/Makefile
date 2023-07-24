CC = gcc
CFLAGS = -Wextra -Werror -Wall
NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

${NAME}: ${OBJ}
	ar -rcs $@ $^

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
