#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr_str;
	char	*new_str;
	size_t	index;

	ptr_str = (char *)s;
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(ptr_str) + 1));
	if (!new_str)
		return (NULL);
	index = 0;
	while (ptr_str[index])
	{
		new_str[index] = (*f)(index, ptr_str[index]);
		index++;
	}
	new_str[index] = 0;
	return (new_str); 
}