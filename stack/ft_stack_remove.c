/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 22:32:25 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/28 22:32:25 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*	The ft_stack_remove function remove an item of the stack and free the 
*	memory used by this item. Obviously we made care about their near items 
*	and replaced each next and previous value to not broke the stack. 
*	At the end of the function, as default we replaced removed item by 
*	the previous item (the most on the top) or else we replaced it by the 
*	next item of removed one. 
*	Yeah it's hard to explain this but I've done my best.
*
*	@param	t_stack **stack	-	The item of the stack to remove.
*
*	@result	Nothing.
*/
void	ft_stack_remove(t_stack **stack)
{
	t_stack	*item;

	if (!stack)
		return ;
	item = *stack;
	if (item->next)
		item->next->previous = item->previous;
	if (item->previous)
		item->previous->next = item->next;
	if (item->previous)
		*stack = item->previous;
	else
		*stack = item->next;
	free(item);
	item = NULL;
}
