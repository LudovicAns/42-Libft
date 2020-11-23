#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
	char    *a;

	a = (char *) s;
	while (*a)
	{
		if (c == *a)
			return (&*a);
		a++;
	}
	if (c == *a)
		return (&*a); 
	return (NULL);
}