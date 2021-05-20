/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:29:15 by jnaftana          #+#    #+#             */
/*   Updated: 2021/05/20 16:53:15 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putnbr(int a);
void	ft_putstr(char *a);

//untested post piscine!!

int	ft_strncmp(char *s1, char *s2, unsigned int a)
{
	while (*s1 && *s2 && a)
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s2 > *s1)
			return (*s1 - *s2);
		s1++;
		s2++;
		a--;
	}
	if (a != 0)
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s2 > *s1)
			return (*s1 - *s2);
	}
	return (0);
}

/*
int	main(void)
{
	char	*t = "Esto es una a cadena de texto";
	char	*r = "Estao es una a cadena de texto";
	
	int	n1;
	int	n2;

	n1 = ft_strncmp(t, r, 4);
	n2 = strncmp(t, r, 4);

	ft_putnbr(n1);
	ft_putstr("\n");
	ft_putnbr(n2);
}
*/