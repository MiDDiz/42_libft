#ifndef __FT_LIB__
# define __FT_LIB__

#include <unistd.h>
#include <stdlib.h>

void			*ft_memset(void *addr, int c, size_t len);
void			ft_bzero(void *addr, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void    		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void    		*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *ptr, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
int				ft_strlen(const char *str);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size); 
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strncmp(char *s1, char *s2, unsigned int a);
int				ft_atoi(const char *const_s);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_tolower(int str);
int				ft_toupper(int str);
void 			*ft_calloc(size_t nitems, size_t size);
char			*ft_strdup(const char *str);

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
void 			ft_putchar_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);

#endif
