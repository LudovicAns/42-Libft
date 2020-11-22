#include "libft.h"

char    *ft_strlcat(char *dest, const char *src, size_t n)
{
    int     i;
    size_t  j;

    i = 0;
    j = 0;
    while(dest[i])
        i++;
    while (j < n && src[j])
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}