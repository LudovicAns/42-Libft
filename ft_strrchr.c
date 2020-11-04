#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *a;
    char    *last;

    a = (char *) s;
    last = NULL;
    while (*a)
    {
        if (c == *a)
            last = &*a;
        a++;
    }
    if (c == *a)
        last = &*a;
    return (&*last);
}