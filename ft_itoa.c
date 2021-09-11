#include "libft.h"

/*
 * We need to cat with size + 2 in order to accomodate space for
 * the new character and the null terminator of strlcat ^_^.
*/

static void	ft_itoa_rec(int n, char *str)
{
	char ch;

	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return;
	}
	if (n < 0)
	{
		ch = '-';
		ft_strlcat(str, &ch, ft_strlen(str) + 2);
		n = -n;
	}
	if (n >= 10)
	{
		ft_itoa_rec(n / 10, str);
		n = n % 10;
	}
	if (n < 10)
	{
		ch = (char)(n + 48);
		ft_strlcat(str, &ch, ft_strlen(str) + 2);
	}
}

char	*ft_itoa(int n)
{
	char *str;

	str = ft_calloc(11, sizeof(char));
	if (!str)
		return (NULL);
	ft_itoa_rec(n, str);
	return(str);
}