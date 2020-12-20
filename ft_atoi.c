/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 15:39:50 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 15:45:00 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r')
		return (1);
	return (0);
}

int				ft_atoi(const char *nptr)
{
	int		count;
	int		sign;

	if (!nptr)
		return (0);
	count = 0;
	sign = 1;
	while (ft_isspace(*nptr) && *nptr)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign = (*nptr++ == '-' ? -1 : 1);
	while ((*nptr >= '0' && *nptr <= '9') && *nptr)
		count = count * 10 + (*nptr++ - 48);
	return (count * sign);
}
