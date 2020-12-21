/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:36:11 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/21 14:19:20 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ccast;

	i = 0;
	while (s[i])
		i++;
	ccast = c;
	while (i >= 0)
	{
		if (s[i] == ccast)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
