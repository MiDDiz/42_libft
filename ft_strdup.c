/*
       The strdup() function returns a pointer to a new string which is
       a duplicate of the string s.  Memory for the new string is
       obtained with malloc(3), and can be freed with free(3).
*/
#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(str) + 1;
	new_str = (char *)malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (new_str);
	ft_strlcpy(new_str, str, len);
	return (new_str);
}