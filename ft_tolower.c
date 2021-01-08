/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:40:00 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:40:10 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	if (!c)
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
