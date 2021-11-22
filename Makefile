SRCS		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_striteri.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
SRCS_B		= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
SRCS_N		= /new_sources/ft_hextoa.c /new_sources/ft_utoa.c

OBJS		= ${SRCS:.c=.o}
OBJS_B		= ${SRCS_B:.c=.o}
OBJS_N		= ${SRCS_N:.c=.o}

NAME		= libft.a
NAME_UX		= libft.so

CC			= clang
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

AR			= ar

RC			= rc

${NAME}:	${OBJS} bonus new_souces
			${CC} -c ${SRCS}
			${AR} ${RC} ${NAME} ${OBJS}
			
all:		${NAME}

subject:	${OBJS}
			${CC} -c ${SRCS}
			${AR} ${RC} ${NAME} ${OBJS}

bonus:		${OBJS_B}
			${CC} -c ${SRCS_B}
			${AR} ${RC} ${NAME} ${OBJS_B}

new_souces:	${OBJS_N}
			${CC} -c ${SRCS_N}
			${AR} ${RC} ${NAME} ${OBJS_N}

clean:
			${RM} ${OBJS} $(OBJS_B)

fclean:		clean
			${RM} ${NAME}

re:			fclean all

so:
	$(CC) -c -fPIC $(CFLAGS) $(SRCS) $(SRCS_B)
	gcc -shared -o ${NAME_UX} $(OBJS) $(OBJS_B)
