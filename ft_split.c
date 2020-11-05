#include "libft.h"
#include <stdio.h>

static  void    fill_tab(char **tab, char const *s, char c)
{
    char    *str;
    int     i; // test

    i = 0;
    while (*s)
    {
        if (*s == c)
        {
            *tab = ft_strdup(str);
            str = "";
            i = 0;
        }
        else
        {
            str[i] = *s;
            i++;
        }
        s++;
    }
}

char            **ft_split(char const *s, char c)
{
    char    **tab;
    int     i;
    int     j;

    i = 0;
    j = 1;
    while (s[i])
        j += s[i++] == c ? 1 : 0;
    tab = (char **) malloc(j * sizeof(char *) + 1);
    tab[j + 1] = NULL;
    fill_tab(tab, s, c);
    return (tab);
}