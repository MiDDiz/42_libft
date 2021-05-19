char    *ft_tolower(char *str)
{
    char *ref;

    ref = str;
    while (*ref)
    {
        if (*ref >= 'A' && *ref <= 'Z')
            *ref = *ref + 'a';
        ref++;
    }
    return (str);
}