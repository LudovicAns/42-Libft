/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:43:57 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/25 13:43:57 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(unsigned long long int number, int base)
{
	int	length;

	if (number == 0)
		return (1);
	length = 0;
	while (number > 0)
	{
		number /= base;
		length++;
	}
	return (length);
}
