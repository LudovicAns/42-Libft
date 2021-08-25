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

#include "libft.h"

long long	ft_atoi(const char *str)
{
	int				i;
	int				negative;
	long long int	number;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	negative = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			negative = -1;
	}
	number = 0;
	while (ft_isdigit(str[i]))
		number = (number * 10) + (negative * (str[i++] - '0'));
	return (number);
}
