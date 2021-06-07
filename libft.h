#ifndef __FT_LIB__
# define __FT_LIB__

#include <unistd.h>

void	*ft_memset(void *addr, int c, size_t len);
void	ft_putstr(char *str);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);
int		ft_isascii(int c);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
void	ft_bzero(void *addr, size_t len);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(void *ptr, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strchr(char *str, int c);
int		ft_strncmp(char *s1, char *s2, unsigned int a);
char	*ft_strstr(char *str, char *to_find);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif
