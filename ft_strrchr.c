/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:36:11 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:36:28 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	char	*last;
	char	ccast;

	a = (char *)s;
	last = NULL;
	ccast = (char)c;
	while (*a)
	{
		if (ccast == *a)
			last = &*a;
		a++;
	}
	if (ccast == *a)
		last = &*a;
	return (&*last);
}
