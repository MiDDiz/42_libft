#include "libft.h"


void	*ft_memset(void *addr, int c, size_t len)
{
	void	*ptr;

	ptr = addr;
	while (len-- && *((char *)ptr) != '\0')
		*((char *)ptr++) = c;
	return (addr);
}
/*
int main(void)
{
	char t[] = "holaholaholahkkjlll";
	ft_putstr(ft_memset(t, 'H', 10));
}*/