/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:45:33 by jnaftana          #+#    #+#             */
/*   Updated: 2021/06/22 15:01:01 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*new_str;
	char	*str_ptr;
	char	*new_str_ptr;

	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	new_str_ptr = new_str;
	str_ptr = (char *)str;
	while (start--)
		str_ptr++;
	while(len--)
		*new_str++ = *str_ptr++;
	*new_str = 0;
	return (new_str_ptr);
}