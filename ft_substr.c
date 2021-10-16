/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:29:50 by jnaftana          #+#    #+#             */
/*   Updated: 2021/09/22 18:29:50 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	char	*str_ptr;
	char	*new_ptr;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len)
		len = str_len;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	str_ptr = (char *)&s[start];
	new_ptr = new_str;
	while (len-- && *str_ptr)
		*new_ptr++ = *str_ptr++;
	*new_ptr = '\0';
	return (new_str);
}
