/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:52:56 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/23 17:52:57 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	char    *a;
	size_t  i;

	if (!s ||!c || !n)
		return;
	a = (char *) s;
	i = 0;
	while (i < n)
	{
		if (a[i] == c)
			return (&a[i]);
		i++;
	}
	return NULL;
}
