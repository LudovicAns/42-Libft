/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:54:00 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/23 17:54:01 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
	char    *dup;
	size_t  slen;

	slen = 0;
	while (s[slen])
		slen++;
	if (!(dup = (char *) malloc(slen * sizeof(char))))
		return (NULL);
	slen = 0;
	while (s[slen++])
		dup[slen - 1] = s[slen - 1];
	return (dup);
}
