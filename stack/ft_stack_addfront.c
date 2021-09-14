/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_addfront.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 14:52:09 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/29 14:52:09 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*	The ft_stack_addfront function add a new item to the front of a stack.
*
*	@param	t_stack **stack	-	The stack where we'll add the new item.
*
*	@param	t_stack *add	-	The new item to add in the stack.
*
*	@result	Nothing.
*/
void	ft_stack_addfront(t_stack **stack, t_stack *add)
{
	t_stack *node;

	node = *stack;
	if (!node || !add)
		return ;
	while (node->previous)
		node = node->previous;
	add->next = node;
	node->previous = add;
}
