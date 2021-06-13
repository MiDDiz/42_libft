/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:40:43 by jnaftana          #+#    #+#             */
/*   Updated: 2021/05/20 22:40:43 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *ptr_dest;
    char	*ptr_src;

    if (!dest && !src)
		return (dest);
    ptr_dest = ((char *)dest);
    ptr_src = ((char *)src);
    if (ptr_dest > ptr_src)
        while (n--)
            *(ptr_dest + n) = *(ptr_src + n);
    else
        while (n--)
            *ptr_dest++ = *ptr_src++;
    return (dest);
}

/*
int main(void)
{
    char t[]="Esto es una prueba";
    memmove(t, t + 5, 7);
    printf("%s", t);
    return (0);
}*/