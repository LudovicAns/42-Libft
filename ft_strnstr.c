#include "libft.h"

char    *ft_strnstr(const char	*s1, const char *s2, size_t n)
{
    char    *a;
    char    *b;
    size_t  i;
    int     j;

    a = (char *) s1;
    b = (char *) s2;
    i = 0;
    if (b[0] == '\0')
        return (a);
    while (a[i] && i < n)
    {
        j = 0;
        while (a[i + j] == b[j] && a[i + j] && b[j])
        {
            if (!(b[j + 1]))
                return(&a[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}