/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:44:02 by jnaftana          #+#    #+#             */
/*   Updated: 2021/08/31 13:13:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int unsigned	offset;
	int unsigned	size_src;

	offset = 0;
	size_src = 0;
	while (*(src + size_src) != '\0')
	{
		size_src++;
	}
	if (size != 0)
	{
		while (*(src + offset) != 0 && offset < (size - 1))
		{
			*(dest + offset) = *(src + offset);
			offset++;
		}
		*(dest + offset) = '\0';
	}
	return (size_src);
}
