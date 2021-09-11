/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:51:47 by jnaftana          #+#    #+#             */
/*   Updated: 2021/08/31 13:12:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Prone to segfault!!

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	index;

	index = 0;
	dest_size = 0;
	while (*dest )
	{
		dest++;
		dest_size++;
	}
	if (size != 0 && dest_size < size)
	{
		while (size - (dest_size + 1) > index)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
		return (dest_size + ft_strlen(src));
	}
	return (ft_strlen(src) + size);
}