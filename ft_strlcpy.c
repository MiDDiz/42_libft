/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:44:02 by jnaftana          #+#    #+#             */
/*   Updated: 2021/09/22 18:24:54 by jnaftana         ###   ########.fr       */
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
