#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
   while(n++)
   {
       if (*((char *)src) == c)
       {
            *((char *)dest++) = *((char *)src);
            return dest++;
       }
       *((char *)dest++) = *((char *)src);
       src++;
   } 
}

int main(void)
{
    char t[] = "Esto es una prueba";
    char *d = malloc(256);

    char *x = ft_memccpy(d, t, 'e', 10);
    printf("Source is: %p with value of %s\nDest is: %p with value of %s\nReturned is: %p with value of %s", t, t, d, d, x, x);
    return 0;
}