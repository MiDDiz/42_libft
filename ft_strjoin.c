/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:54:22 by jnaftana          #+#    #+#             */
/*   Updated: 2021/06/22 15:00:53 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1_ptr;
	char	*s2_ptr;
	char	*new_str;
	char	*new_str_ptr;
	size_t	len;

	s1_ptr = (char *)s1;
	s2_ptr = (char *)s2;
	len = 0;
	while (*s1_ptr++)
		len++;
	while (*s2_ptr++)
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	s1_ptr = (char *)s1;
	s2_ptr = (char *)s2;
	while (*s1_ptr)
		*new_str++ = *s1_ptr++;
	while (*s2_ptr)
		*new_str++ = *s2_ptr++;
	*new_str = 0;
	return (new_str_ptr);
}