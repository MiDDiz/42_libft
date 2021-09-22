/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:27:20 by jnaftana          #+#    #+#             */
/*   Updated: 2021/09/22 18:27:20 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_str;
	char	*new_str;
	size_t	size_str;

	if (!s1 || !set)
		return (NULL);
	ptr_str = (char *)s1;
	if (!*s1)
		return (ptr_str);
	while (*ptr_str && ft_strchr(set, *ptr_str))
		ptr_str++;
	size_str = ft_strlen(ptr_str);
	while (size_str && ft_strchr(set, ptr_str[size_str]))
		size_str--;
	new_str = ft_substr(ptr_str, 0, size_str + 1);
	return (new_str);
}
