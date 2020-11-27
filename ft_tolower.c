/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:55:38 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/23 17:55:42 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int     ft_tolower(int c)
{
	if (!c)
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
