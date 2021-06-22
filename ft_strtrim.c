/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:01:26 by jnaftana          #+#    #+#             */
/*   Updated: 2021/06/22 18:29:18 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_str;
	size_t	n_start;
	size_t	len_set;

	len_set = ft_strlen(set);
	ptr_str = ft_strnstr(s1, set, len_set);
	if (ptr_str == s1)
		n_start = len_set;
	else
		n_start = 0;
	ptr_str = ft_strrchr(s1, *set);
	ptr_str = ft_strnstr((char const *)ptr_str, set, len_set);
	if (!ptr_str)
		return (ft_substr(s1, n_start, ft_strlen(s1) - 1));
	return (ft_substr(s1, n_start, ft_strlen(s1) - len_set - 1));
}
