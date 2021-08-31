/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_addback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 15:01:54 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/29 15:01:54 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*	The ft_stack_addback function add a new item to the back of a stack.
*
*	@param	t_stack *stack	-	The stack where we'll add the new item.
*
*	@param	t_stack *add	-	The new item to add in the stack.
*
*	@result	Nothing.
*/
void	ft_stack_addback(t_stack *stack, t_stack *add)
{
	if (!stack || !add)
		return ;
	while (stack->next)
		stack = stack->next;
	add->previous = stack;
	stack->next = add;
}
