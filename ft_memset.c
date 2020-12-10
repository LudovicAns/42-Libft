/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:53:36 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/23 17:53:37 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (n == 0)
		return (s);
	ptr = (unsigned char *)s;
	while (n-- != 0)
	{
		*ptr = (unsigned char)c;
		if (n > 0)
			ptr++;
	}
	return (s);
}
