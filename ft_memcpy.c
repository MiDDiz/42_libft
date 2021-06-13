/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:22:09 by jnaftana          #+#    #+#             */
/*   Updated: 2021/06/09 11:55:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Untested!
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (!dst && !src)
		return (dst);
	ptr_dst = ((unsigned char *)dst);
	ptr_src = ((unsigned char *)src);
	while (n-- > 0)
		*ptr_dst++ = *ptr_src++;
	return (dst);
}