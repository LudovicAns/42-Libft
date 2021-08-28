/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:39:08 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:39:29 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*out;

	if (!s)
		return (NULL);
	size = ft_strlen(s) - start;
	if (len > size)
		size = size;
	else
		size = len;
	if (start > ft_strlen(s))
		size = 0;
	out = (char *)malloc(sizeof(char) * size + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < size)
		out[i++] = s[start++];
	out[i] = '\0';
	return (out);
}
