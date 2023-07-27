SRC = $(wildcard src/*.c)
OBJ = $(patsubst %.c,%.o,$(SRC))
NAME = ft_printf
CC = gcc
CFLAGS = -Wextra -Wall -Werror
INC_DIR1 = include
INC_DIR2 = libft
LIB = libft
LIB_DIR = libft

$(NAME): $(OBJ) libft.a
	$(CC) $(CFLAGS) $(OBJ) -L$(LIB_DIR) -lft -o $@

all: $(NAME)

libft.a:
	$(MAKE) -C $(LIB_DIR)

%.o: %.c $(wildcard $(INC_DIR1)/*.h)
	$(CC) $(CFLAGS) -c $< -I$(INC_DIR2) -I$(INC_DIR1) -o $@

clean:
	@rm -f $(OBJ)
	$(MAKE) -C $(LIB_DIR) clean

fclean: clean
	@rm -f $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean

re: fclean all
	$(MAKE) -C $(LIB_DIR) re