/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:22:52 by jnaftana          #+#    #+#             */
/*   Updated: 2021/05/20 16:23:37 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *addr, size_t len)
{
	while (len--)
		*((char *)addr++) = 0;
}

/*
int main(void)
{
	char t[] = "JSDHFJSDFHSDFHSDFH";
	printf("%s\n", t);
	ft_bzero(t, 5);
	printf("%s\n", (t + 4));
	printf("%s\n", (t + 5));
}*/