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

