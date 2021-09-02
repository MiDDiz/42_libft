#include "libft.h"


char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s_len;
	char	*new_str;

	s_len = 0;
	s_len += ft_strlen(s1);
	s_len += ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (s_len + 1));
	ft_strlcpy(new_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_str, s2, s_len + 1);
	return(new_str);
}
