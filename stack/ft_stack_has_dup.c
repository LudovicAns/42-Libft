/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_has_dup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:41:27 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/01 15:41:27 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * The ft_stack_has_dup function check if the given stack has duplicate
 * integer value.
 * 
 * @param	t_stack **stack	-	Checked stack.
 * 
 * @return	0 if stack has not duplicate integer value else 1.
 *
 */ 
int	ft_stack_has_dup(t_stack **stack)
{
	t_stack	*node;

	node = ft_stack_getfirst(*stack);
	while (node)
	{
		if (ft_stack_count(node, node->integer) > 1)
			return (1);
		node = node->next;
	}
	return (0);
}
