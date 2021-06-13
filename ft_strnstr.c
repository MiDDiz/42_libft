/*
     The strnstr() function locates the	first occurrence of the	null-termi-
     nated string little in the	string big, where not more than	len characters
     are searched.  Characters that appear after a `\0'	character are not
     searched.
*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char *ptr_big;
	char *ptr_little;
	while(*big && len--)
	{
		if (*big == *little)
		{
			ptr_big = (char *)big;
			ptr_little = (char *)little;
			while (*ptr_little)
			{
				if (*ptr_little != *ptr_big)
					break;
				ptr_little++;
				ptr_big++;
			}
			if (*ptr_little == 0)
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}