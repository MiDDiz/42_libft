/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:44:02 by jnaftana          #+#    #+#             */
/*   Updated: 2021/05/20 16:50:48 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//We return offset + 1 to srcIsEmpy to store the size of src.
//Untested post piscine!!
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
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
/*
#include <string.h>
int	main(void)
{
	char *a = "Cadena inicio";
	char b[200];
	char c[200];

	strlcpy(b, a, 0);
	printf("%s\n", b);
	ft_strlcpy(c, a, 0);
	printf("%s\n", c);
}*/