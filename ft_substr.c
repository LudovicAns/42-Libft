#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t  i;
	size_t  j;
	char    *substr;

	i = 0;
	if (!(substr = (char *) malloc(len * sizeof(char) + 1)))
		return (NULL);
	while (s[i] && i < start)
		i++;
	j = 0;
	while (s[i + j] && j++ < len)
		substr[j - 1] = s[i + j - 1];
	substr[j - 1] = '\0';
	return (substr);
}