/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:04:31 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:05:16 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*a;
	size_t	i;
	char	ccast;

	a = (char *)s;
	i = 0;
	ccast = (char)c;
	while (i < n)
	{
		if (a[i] == ccast)
			return (&a[i]);
		i++;
	}
	return (NULL);
}
