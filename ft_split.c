#include "libft.h"
#include <stdio.h>

static  int     tab_size(char const *s, char c)
{
    int     i;
    int     size;

    i = 0;
    size = 1;
    while (s[i])
        size += s[i++] == c && s[i] != c ? 1 : 0;
    return size;
}

static  char    **malloc_strs(char **tab, int size, char c, char const *s)
{
    int     i;
    int     j;
    int     count;

    i = 0;
    j = 0;
    while (i < size)
    {
        count = 0;
        while (s[j] != c && s[j++])
            count++;
        if (count != 0)
            tab[i++] = (char *) malloc(count * sizeof(char) + 1);
        j++;
    }
    return (tab);
}

char            **ft_split(char const *s, char c)
{
    char    **tab;
    int     size;
    int     i;
    int     j;
    int     k;

    size = tab_size(s, c);
    tab = (char **) malloc(size * sizeof(char *) + 1);
    tab[size + 1] = NULL;
    tab = malloc_strs(tab, size, c, s);
    i = 0;
    j = 0;

    while (tab[i] != NULL)
    {
        k = 0;
        while (s[j] != c && s[j])
            tab[i][k++] = s[j++];
        if (k != 0)
            tab[i++][k] = '\0';
        j++;
    }

    return (tab);
}