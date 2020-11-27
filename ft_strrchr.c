/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:55:00 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/23 17:55:02 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	char    *a;
	char    *last;

	if (!s || !c)
		return (0);
	a = (char *) s;
	last = NULL;
	while (*a)
	{
		if (c == *a)
			last = &*a;
		a++;
	}
	if (c == *a)
		last = &*a;
	return (&*last);
}
