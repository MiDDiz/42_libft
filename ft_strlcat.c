/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:51:47 by jnaftana          #+#    #+#             */
/*   Updated: 2021/05/20 16:52:43 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//ESTO DA SEGFAULT COMPROBAR ANTES!!

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_size;
	unsigned int	c_src;

	c_src = 0;
	d_size = 0;
	while (*dest)
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


int	main(void)
{
	char *a = "This is sourceeeeee3";
	char d[400];
	for (int i = 0; i < 20; i++)
	{
		d[i] = i + '0';
	}
	char dt[400];
	for (int i = 0; i < 20; i++)
	{
		dt[i] = i + '0';
	}
	ft_strlcat(d, a, 22);
	printf("%s\n", d);
	strlcat(dt, a, 22);
	printf("%s\n", dt);
	return (0);
}
