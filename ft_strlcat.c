/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:51:47 by jnaftana          #+#    #+#             */
/*   Updated: 2021/10/15 15:48:31 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_n;
	size_t	src_n;
	size_t	i;

	dst_n = ft_strlen(dst);
	src_n = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_n)
		return (dstsize + src_n);
	if (dstsize > (dst_n + 1))
	{
		while (src[i] != '\0' && (dst_n + 1 + i) < dstsize)
		{
			dst[dst_n + i] = src[i];
			i++;
		}
	}
	dst[dst_n + i] = '\0';
	return (src_n + dst_n);
}

/*
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
*/