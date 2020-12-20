/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:11:33 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:16:22 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_rows(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static int	row_size(char const *s, int i, char c)
{
	int size;

	size = 0;
	while (s[i] && s[i++] != c)
		size++;
	return (size + 1);
}

static void	*free_rows(char **rows)
{
	int size;

	size = 0;
	while (rows[size])
		size++;
	while (size > 0)
	{
		size--;
		free(rows[size]);
	}
	free(rows);
	return ((void *)0);
}

char		**ft_split(char const *s, char c)
{
	char	**rows;
	int		i[3];

	if (!s || !(rows = (char **)malloc(sizeof(char *) * (nb_rows(s, c) + 1))))
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	while (s[i[0]])
	{
		if (s[i[0]] != c)
		{
			i[2] = 0;
			if (!(rows[i[1]] = (char *)malloc(sizeof(char) * row_size(s, i[0], c))))
				return (free_rows(rows));
			while (s[i[0]] && s[i[0]] != c)
				rows[i[1]][i[2]++] = s[i[0]++];
			rows[i[1]][i[2]] = '\0';
			i[1]++;
		}
		else
			i[0]++;		
	}
	rows[i[1]] = NULL;
	return (rows);
}
