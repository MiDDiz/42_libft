#include "libft.h"

// Checked ✔️

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	char	*str_ptr;
	char	*new_ptr;

	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	str_ptr = (char *)s;
	new_ptr = new_str;
	while(len-- && *str_ptr)
		*new_ptr++ = *str_ptr++;
	*new_ptr = '\0';
	return (new_str);
}