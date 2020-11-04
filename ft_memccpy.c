#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char    *a;
    char    *b;
    int     i;

    a = (char *) dest;
    b = (char *) src;
    i = 0;
    while (i < n)
    {
        a[i] = b[i];
        if (b[i] == c)
            return (&a[i+1]);
        i++;
    }
    return (0);
}