/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:51:47 by jnaftana          #+#    #+#             */
/*   Updated: 2021/06/11 20:16:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int off_dest;
	int off_src;

	off_dest = 0;
	off_src = 0;
	while (*(dest + off_dest) && size--)
		off_dest++;
	while (size-- > 0)
		*(char *)(src + off_src++) = *(dest + off_dest++);
	*(char *)(src + off_src) = 0;
	return (off_dest + 1);
}

/*
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_size;
	size_t	c_src;

	c_src = 0;
	d_size = 0;
	while (*dest )
	{
		dest++;
		d_size++;
	}
	if (!(size == 0 || d_size >= size))
	{
		while (c_src < size - d_size - 1)
		{
			*(dest + c_src) = *(src + c_src);
			c_src++;
		}
		*(dest + c_src) = '\0';
	}
	return (d_size + c_src);
}

*/