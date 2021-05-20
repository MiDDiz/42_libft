#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *addr, size_t len)
{
	while (len--)
		*((char *)addr++) = 0;
}

int main(void)
{
	char t[] = "JSDHFJSDFHSDFHSDFH";
	printf("%s\n", t);
	ft_bzero(t, 5);
	printf("%s\n", (t + 4));
	printf("%s\n", (t + 5));
}