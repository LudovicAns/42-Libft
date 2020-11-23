#include "libft.h"

char    *ft_strdup(const char *s)
{
	char    *dup;
	size_t  slen;

	slen = 0;
	while (s[slen])
		slen++;
	if (!(dup = (char *) malloc(slen * sizeof(char))))
		return (NULL);
	slen = 0;
	while (s[slen++])
		dup[slen - 1] = s[slen - 1];
	return (dup);
}