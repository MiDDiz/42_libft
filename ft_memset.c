/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:27:51 by jnaftana          #+#    #+#             */
/*   Updated: 2021/05/20 16:27:53 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *addr, int c, size_t len)
{
	void	*ptr;

	ptr = addr;
	while (len-- && *((char *)ptr) != '\0')
		*((char *)ptr++) = c;
	return (addr);
}
/*
int main(void)
{
	char t[] = "holaholaholahkkjlll";
	ft_putstr(ft_memset(t, 'H', 10));
}*/