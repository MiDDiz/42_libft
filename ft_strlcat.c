/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:51:47 by jnaftana          #+#    #+#             */
/*   Updated: 2021/09/22 18:24:40 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	index;

	index = 0;
	dest_size = 0;
	while (*dest)
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
