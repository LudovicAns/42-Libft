#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char    *a;
    int     i;

    a = (char *) s;
    i = 0;
    while (i < n)
    {
        a[i] = '\0';
        i++;
    }
}