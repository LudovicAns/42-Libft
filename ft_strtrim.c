/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:37:07 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:38:10 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	isend(char const *s, char const *set)
{
	while (*s)
	{
		if (!isset(*s++, set))
			return (0);
	}
	return (1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;

	if (!(result = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] && isset(s1[i], set))
		i++;
	while (s1[i] && !isend(&s1[i], set))
		result[j++] = s1[i++];
	result[j] = '\0';
	return (result);
}
