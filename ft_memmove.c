#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	char    *a;
	char    *b;
	size_t  i;

	a = (char *) dest;
	b = (char *) src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}