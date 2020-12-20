/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:03:30 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:04:15 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char *)dest;
	b = (char *)src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		if (b[i] == c)
			return (&a[i + 1]);
		i++;
	}
	return (0);
}
