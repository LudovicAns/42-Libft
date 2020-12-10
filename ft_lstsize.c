/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:54:35 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/25 15:54:36 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*actual = lst;

	if (!lst)
		return (0);
	count = 1;
	while (actual->next != NULL)
	{
		actual = actual->next;
		count++;
	}
	return (count);
}
