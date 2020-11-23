#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
	void *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = (void *) malloc(nmemb * size);
	return (a);
}