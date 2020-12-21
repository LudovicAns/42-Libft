/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 15:54:26 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 15:54:46 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int nb)
{
	unsigned int	nui;
	int				i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nui = -nb;
		i++;
	}
	else
		nui = nb;
	while (nui)
	{
		nui /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int nb)
{
	unsigned int	nui;
	char			*out;
	int				i;

	if (!(out = (char *)malloc(sizeof(char) * ft_nbrlen(nb) + 1)))
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		nui = -nb;
		out[i++] = '-';
	}
	else
		nui = nb;
	i = ft_nbrlen(nb) - 1;
	while (nui)
	{
		out[i--] = (nui % 10) + '0';
		nui /= 10;
	}
	if (nb == 0)
		out[i] = '0';
	out[ft_nbrlen(nb)] = '\0';
	return (out);
}
