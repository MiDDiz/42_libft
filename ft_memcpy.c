/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:22:09 by jnaftana          #+#    #+#             */
/*   Updated: 2021/05/26 14:55:17 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Untested!
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *ptr;
	
	ptr = ((char *)dst);
	while (n-- > 0)
		*ptr++ = *((char *)src++);
	return (dst);
}

int main(void)
{
	*ft_memcpy(NULL, NULL, 3);
	return (0);
}