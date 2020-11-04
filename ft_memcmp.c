#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char    *a;
    char    *b;
    int     i;

    a = (char *) s1;
    b = (char *) s2;
    i = 0;
    if (n == 0)
        return (0);
    while (i < n)
    {
        if (a[i] != b[i])
            return (a[i] - b[i]);
        i++;
    }
    return (a[i] - b[i]);
}