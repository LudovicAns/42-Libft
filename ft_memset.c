/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:07:56 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:08:13 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	char			ccast;

	ccast = (char)c;
	if (n == 0)
		return (s);
	ptr = (unsigned char *)s;
	while (n-- != 0)
	{
		*ptr = (unsigned char)ccast;
		if (n > 0)
			ptr++;
	}
	return (s);
}
