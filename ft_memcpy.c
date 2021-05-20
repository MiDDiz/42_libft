/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:22:09 by jnaftana          #+#    #+#             */
/*   Updated: 2021/05/20 16:47:46 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Untested!
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *ptr = dst;
	while (n--)
		*((char *)ptr++) = *((char *)src++);
	return (dst);
}
