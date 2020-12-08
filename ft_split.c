/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:53:43 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/23 17:53:45 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_tab(char **tab, char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	*temp;

	i = 0;
	j = 0;
	while (s[j] && s[j] == c)
		j++;
	while (s[j])
	{
		temp = (char *) malloc(500 * sizeof(char));
		k = 0;
		while (s[j] && s[j] != c)
			temp[k++] = s[j++];
		while(s[j] && s[j] == c)
			j++;
		tab[i++] = ft_strdup(temp);
		temp = NULL;
		free(temp);
	}
}

static char	**malloc_tab(char const *s, char c)
{
	char	**tab;
	int		i;
	int		row;

	i = 0;
	row = 1;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i + 1] && s[i + 1] == c)
				i++;
			row++;
		}
		i++;
	}
	tab = (char **) malloc((row + 1) * sizeof(char *));
	tab[row] = NULL;
	return (tab);
}

char		**ft_split(char const *s, char c)
{
	char	**splited;

	splited = malloc_tab(s, c);
	fill_tab(splited, s, c);
	return (splited);
}
