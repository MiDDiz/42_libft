#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	if (n < 0) 
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10) 
	{
		ft_putnbr_fd(nb / 10, fd);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar_fd(nb + 48, fd);
}