/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:44:36 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/22 13:44:36 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_lstremove remove and free content inside the given node.
 * After that, *list is equal to the next node.
 * 
 * @param	t_list **list	-	Address to the pointer of the node to remove.
 * 
 * @return	Nothing.
 */
void	ft_lstremove(t_list **list)
{
	t_list	*node;

	node = *list;
	if (node && node->content)
		free(node->content);
	*list = node->next;
	if (node)
		free(node);
}
