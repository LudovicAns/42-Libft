#include "libft.h"

static int  isset(char c, char const *set)
{
    while (*set)
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

char        *ft_strtrim(char const *s1, char const *set)
{
    char    *result;
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (s1[j])
        i += isset(s1[j++], set) ? 0 : 1;
    if (!(result = (char *) malloc(i * sizeof(char) + 1)))
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        if (!(isset(s1[i], set)))
            result[j++] = s1[i];
        i++;
    }
    result[j] = '\0';
    return (result);
}