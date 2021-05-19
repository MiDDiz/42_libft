char    *ft_toupper(char *str)
{
    char *ref;

    ref = str;
    while (*++ref != '\0')
        if (*ref >= 'a' && *ref <= 'z')
            *ref = *ref - 'a';
    return (str);
}