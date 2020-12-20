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

	a = (char *)s;
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
