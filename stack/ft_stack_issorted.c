/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_issorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 15:40:53 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/29 15:40:53 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*	The ft_stack_issorted function check if a stack is completely sorted.
*
*	@param	t_stack *stack	-	The stack to check.
*
*	@return	
*		-1 if the stack does'nt exist.
*		0 if the stack is'nt sorted.
*		1 if the stack is sorted.
*/
int	ft_stack_issorted(t_stack *stack)
{
	if (!stack)
		return (-1);
	stack = ft_stack_getfirst(stack);
	while (stack->next)
	{
		if (stack->integer > stack->next->integer)
			return (0);
		stack = stack->next;
	}
	return (1);
}
