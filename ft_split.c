/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:20:53 by jnaftana          #+#    #+#             */
/*   Updated: 2021/09/22 18:20:53 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_substr(char const *s, char c)
{
	size_t	num_substr;
	char	*ptr_str;

	ptr_str = (char *)s;
	num_substr = 1;
	while (*ptr_str++)
		if (*ptr_str == c)
			num_substr++;
	return (num_substr);
}

char	**ft_split(char const *s, char c)
{
	char	*ptr_str;
	char	*pivot_str;
	char	**table_str;
	char	**table_ptr;

	table_str = (char **)malloc(sizeof(char *) * (ft_num_substr(s, c) + 1));
	if (!table_str)
		return (NULL);
	table_ptr = table_str;
	ptr_str = ft_strtrim(s, &c);
	pivot_str = ptr_str;
	while (pivot_str && *pivot_str)
	{
		pivot_str = ft_strchr(ptr_str, c);
		if (pivot_str)
		{
			*table_ptr = (char *)malloc(sizeof(char) * (pivot_str - ptr_str));
			ft_strlcpy(*table_ptr++, ptr_str, pivot_str - ptr_str + 1);
			ptr_str = ft_strtrim(pivot_str, &c);
		}
		else
			*table_ptr++ = ft_strdup(ptr_str);
	}
	*table_ptr = NULL;
	return (table_str);
}
