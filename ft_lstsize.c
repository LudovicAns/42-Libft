/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:01:33 by lanselin          #+#    #+#             */
/*   Updated: 2020/12/20 16:02:06 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*actual;

	actual = lst;
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
