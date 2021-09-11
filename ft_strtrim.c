#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	char	*ptr_set_in_str;
	char	*ptr_str;
	size_t	new_str_len;
	size_t	set_len;

	new_str_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	ptr_set_in_str = ft_strnstr(s1, set, set_len);
	if (ptr_set_in_str == (char *)s1)
	{
		ptr_str = (char *)s1 + set_len;
		new_str_len -= set_len; 
	}
	else
		ptr_str = (char *)s1;
	if (ft_strnstr(ft_strrchr(s1, *set), set, set_len))
		new_str_len -= set_len;
	new_str = (char *)malloc(sizeof(char) * (new_str_len + 1));
	ft_strlcpy(new_str, ptr_str, new_str_len + 1);
	return(new_str);
}