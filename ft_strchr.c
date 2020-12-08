/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:53:52 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/23 17:53:53 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
	char    *a;

	a = (char *) s;
	while (*a)
	{
		if (c == *a)
			return (&*a);
		a++;
	}
	if (c == *a)
		return (&*a); 
	return (NULL);
}
