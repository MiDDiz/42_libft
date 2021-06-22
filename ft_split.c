/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:35:48 by jnaftana          #+#    #+#             */
/*   Updated: 2021/06/22 19:11:51 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	On new_substr, the end pos is shfted by -2. One bc indexes start at 0, and
	another one because 'c' shouldn't be un the substrings.

*/

static void ft_spliter(char **table, char *str, char c)
{
	size_t	len;
	size_t	abs_pos;
	char	*new_substr;

	abs_pos = 0;
	while (*str++)
	{
		len = 0;
		while(*str && (*str++ != c))
			len++;
		new_substr = ft_substr((const char *)str, abs_pos, len - 2);
		abs_pos += len;
		*table++ = new_substr;
	}
}

char	**ft_split(char const *str, char c)
{
	char	*str_ptr;
	char	**str_table;
	size_t	count;

	count = 0;
	str_ptr = (char *)str;
	while(*str_ptr++)
		if (*str_ptr == c)
			count++;
	str_table = (char **)malloc(sizeof(char *) * (count + 1));
	if (!str_table)
		return (NULL);
	ft_splitter(str_table, (char *)str, c);
	return(str_table);
}