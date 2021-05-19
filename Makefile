NAME = libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isascii.c ft_putstr.c ft_tolower.c ft_toupper.c libft.h

SRC_T = tests_1.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test: 
	$(CC) $(CFLAGS) -o test_$(NAME) $(SRC) $(SRC_T)