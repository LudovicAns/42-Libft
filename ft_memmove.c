/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:07:22 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:07:34 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = dest;
	ptr_src = src;
	if (ptr_src < ptr_dest)
		while (n--)
			ptr_dest[n] = ptr_src[n];
	else
	{
		while (n--)
			*ptr_dest++ = *ptr_src++;
	}
	return (dest);
}
