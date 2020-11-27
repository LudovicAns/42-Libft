/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:52:40 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/23 17:52:41 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int		count;
	int		sign;

	if (!nptr)
		return (0);
	count = 0;
	sign = 1;
	while (*nptr == ' ' && *nptr)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign = (*nptr++ == '-' ? -1 : 1);
	while ((*nptr >= '0' && *nptr <= '9') && *nptr)
		count = count * 10 + (*nptr++ - 48);
	return (count *sign);
}
