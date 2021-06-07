/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:27:51 by jnaftana          #+#    #+#             */
/*   Updated: 2021/05/26 14:32:54 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *addr, int c, size_t len)
{
	char	*ptr;

	ptr = ((char *)addr);
	while (len--)
		*ptr++ = c;
	return (addr);
}

/*
int main(void)
{
	char t[] = "holaholaholahkkjlll";
	ft_putstr(ft_memset(t, 'A', 400));
}*/