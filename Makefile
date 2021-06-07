SRCS	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putstr.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strstr.c ft_tolower.c ft_toupper.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= clang
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR		= ar

RC		= rc

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -c ${SRCS}
			${AR} ${RC} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all