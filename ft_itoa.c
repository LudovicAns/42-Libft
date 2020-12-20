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

static int	numsize(int n)
{
	int count;

	count = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n / 10 >= 1)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	return (ft_power(nb, power - 1) * nb);
}

char		*ft_itoa(int n)
{
	char	*string;
	int		i;
	int		dizaine;

	if (!(string = (char *)malloc((numsize(n) + 1) * sizeof(char))))
		return (NULL);
	if (n == -2147483648)
		return (string = "-2147483648");
	i = 0;
	if (n < 0)
	{
		string[i++] = '-';
		n *= -1;
	}
	dizaine = ft_power(10, numsize(n) - 1);
	while (dizaine)
	{
		string[i++] = n / dizaine + 48;
		n = n % dizaine;
		dizaine /= 10;
	}
	string[i] = '\0';
	return (string);
}
