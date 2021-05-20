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
int		ft_isnum(int c);
#endif
