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

	if (!(dup = (char *) malloc(ft_strlen(s) + 1 * sizeof(char))))
		return (NULL);
	return (ft_strcpy(dup, s));
}
