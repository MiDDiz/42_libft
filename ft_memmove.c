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
    char    *ptr;

    ptr = dest;
    if (dest > src)
        while (n--)
            *((char *)dest + n) = *((char *)src + n);
    else
        while (n--)
            *((char *)dest++) = *((char *)src++);
    return (ptr);
}

/*
int main(void)
{
    char t[]="Esto es una prueba";
    memmove(t, t + 5, 7);
    printf("%s", t);
    return (0);
}*/