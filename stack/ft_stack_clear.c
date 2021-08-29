/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:03:02 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/29 16:03:02 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*	The ft_stack_clear function remove all items in a stack. 
*	And finally set the pointer to the stack to NULL.
*
*	@param	t_stack *stack	-	The pointer to the stack.
*
*	@result	Nothing.
*/
void	ft_stack_clear(t_stack **stack)
{
	if (!stack)
		return ;
	while (*stack)
		ft_stack_remove(stack);
	stack = NULL;
}
