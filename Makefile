SRCS		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_striteri.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJS		= ${SRCS:.c=.o}

NAME_OSX	= libft.a
NAME_UX		= libft.so

CC			= clang
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

AR			= ar

RC			= rc

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -c ${SRCS}
			${AR} ${RC} ${NAME_OSX} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

so:
	$(CC) -c -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o ${NAME_UX} $(OBJS)
