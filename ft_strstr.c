/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:15:41 by jnaftana          #+#    #+#             */
/*   Updated: 2021/04/21 17:15:43 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	compare_on_site(char *str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	if (*to_find)
		return (0);
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (compare_on_site(str, to_find))
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}

/*
int	main(void)
{
	char *a = "Foo Bar Baz";
	char *b = "Bar";
	char *ptr;
	char *ptr2;
	
	printf("%s\n", strstr(a, b));
	printf("%s\n", ft_strstr(a, b));
}
*/