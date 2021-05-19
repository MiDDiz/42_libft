

char    *ft_tolower(char *str)
{
    char *ref;

    ref = str;
    while (*++ref != '\0')
        if (*ref >= 'A' && *ref <= 'Z')
            *ref = *ref + '32';
    return (str);
}