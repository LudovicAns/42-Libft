/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:10:52 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/22 13:10:52 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	iseol(char *s)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == '\n')
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strdup_gnl(char *s)
{
	char	*dup;
	int		i;

	dup = (char *)malloc((ft_strlen_gnl(s, 0) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	if (s[i] == '\0')
	{
		dup[i] = '\0';
	}
	return (dup);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (0);
	str = (char *)malloc((ft_strlen_gnl(s1, 0) + ft_strlen_gnl(s2, 0) + 1)
			* sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

int	ft_strlen_gnl(char *s, int eol)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (eol == 1)
	{
		while (s[i] && s[i] != '\n')
			i++;
	}
	else if (eol == 0)
	{
		while (s[i])
			i++;
	}
	return (i);
}

char	*ft_substr_gnl(char *s, int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*out;

	if (!s)
		return (NULL);
	size = ft_strlen_gnl(s, 0) - start;
	if (!(len > size))
		size = len;
	if (start > ft_strlen_gnl(s, 0))
		size = 0;
	out = (char *)malloc(sizeof(char) * (size + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (i < size)
		out[i++] = s[start++];
	out[i] = '\0';
	return (out);
}
