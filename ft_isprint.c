/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:52:40 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/23 17:52:41 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int     ft_isprint(int c)
{
	if (!c)
		return (0);
	if (c >= ' ' && c < 127)
		return (1);
	return (0);
}
