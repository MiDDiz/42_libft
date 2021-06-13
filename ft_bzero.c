/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:22:52 by jnaftana          #+#    #+#             */
/*   Updated: 2021/06/11 14:01:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *addr, size_t len)
{
	char *ptr_cast = (char *)addr;
	while (len--)
		*ptr_cast++ = 0;
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