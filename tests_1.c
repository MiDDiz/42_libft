#include <stdio.h>
#include "libft.h"
/* 
    Este archivo no cumple la norma de 42.
    El proposito de este archivo es almacenar cuantos más tests
    mejor para comprobar las diversas librerías.
    Las unicas funciones necesarias para que estos tests funcionen son:
        ft_putstr()     y       ft_strlcmp()
    
*/
void    put(char *str)
{
    ft_putstr(str);
}

void    ft_tolowerTest1(void)
{
    char expOutput[] = "abcdefghijklmnopqrstuvwxyz";
    char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char funcName[] = "ft_tolower";
    put("---------------- Test #1 ----------------\n\n");

    put("Testeando: "); put(funcName);
    put("Convirtiendo: "); put(input); put(" en "); put(expOutput);
    put("\n");
    char *XD = ft_tolower(input);
    put(XD);
    put("Resultado: "); put(input);
    put("---------------- Test #1 ----------------\n\n");
}

void	ft_toupperTest2(void)
{
    char expOutput[] = "abcdefghijklmnopqrstuvwxyz";
    char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char funcName[] = "ft_tolower";

}

int main(void)
{
    ft_tolowerTest1();
}
