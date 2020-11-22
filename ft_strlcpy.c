#include "libft.h"

char    *ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (src[i])
            dest[i] = src[i];
        else
            dest[i] = '\0';
        i++;
    }
    return (dest);
}