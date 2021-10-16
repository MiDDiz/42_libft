/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 10:39:55 by jnaftana          #+#    #+#             */
/*   Updated: 2021/10/16 10:59:44 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_substr(char const *s, char c)
{
	size_t	num_substr;
	char	*ptr_str;

	ptr_str = (char *)s;
	if (!*s)
		return (0);
	num_substr = 1;
	while (*ptr_str++)
		if (*ptr_str == c)
			num_substr++;
	return (num_substr);
}

static void	ft_splitter(char *str, char c, char **table_ptr)
{
	char	*ptr_str;

	ptr_str = str;
	while (*str)
	{
		if (*str == c)
		{
			*table_ptr = (char *)malloc(sizeof(char) * (str - ptr_str + 1));
			ft_strlcpy(*table_ptr++, ptr_str, str - ptr_str + 1);
			while (*str++ == c) ;
			ptr_str = str;
		}
		str++;
	}
	*table_ptr = (char *)malloc(sizeof(char) * (str - ptr_str + 1));
	ft_strlcpy(*table_ptr++, ptr_str, str - ptr_str + 1);
	*table_ptr = NULL;
}

char	**ft_split(char const *str, char c)
{
	char	**table_str;
	char	*ptr_str;

	table_str = (char **)malloc(sizeof(char *) * (ft_num_substr(str, c) + 1));
	if (!table_str)
		return (NULL);
	ptr_str = ft_strtrim((char *)str, &c);
	ft_splitter(ptr_str, c, table_str);
	free(ptr_str);
	
	return (table_str);
}
