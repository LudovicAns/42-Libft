/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:16:38 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:27:25 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;
	char	ccast;

	a = (char *)s;
	ccast = (char)c;
	while (*a)
	{
		if (ccast == *a)
			return (&*a);
		a++;
	}
	if (ccast == *a)
		return (&*a);
	return (NULL);
}
